import re
from profile import Profile

import requests
from bs4 import BeautifulSoup

from command_parser import parse_cmd
from custom_exceptions import NoResultsException
from data_holder import DataHolder
from recipe import Recipe
from stats import Stats
from url import Url

args = parse_cmd()

url = Url()
if args.products is not None:
    url.add_products_to_url(args.products)
elif args.last_cooked is not None and args.last_cooked is True:
    url.add_last_cooked_to_url()
elif args.dish is not None:
    url.add_dish_name_to_url(args.dish)

html = requests.get(url.__str__(), headers={"User-Agent": "agent"}, timeout=3)
soup = BeautifulSoup(html.text, "html.parser")

# Store recipe urls
data_holder = DataHolder()

recipes = soup.findAll("a", attrs={"class": "title"})

if len(recipes) <= 0:
    raise NoResultsException
else:
    for recipe in range(args.number):
        url = recipes[recipe]["href"]
        data_holder.add_recipe_url("{}{}".format(url.encode("utf-8"), "?s=1"))

for rec in data_holder.get_recipe_urls():
    recipe_html = requests.get(rec, headers={"User-Agent": "agent"}, timeout=3)
    soup = BeautifulSoup(recipe_html.text, "html.parser")

    recipe = Recipe()

    for header in soup.findAll("div", attrs={"class": "combocolumn mr"}):
        recipe.name = header.findNext("h1").text.encode("utf-8")

    for section in soup.findAll("section"):
        for ul_tag in section.findAll("ul"):
            for li_tag in ul_tag.findAll("li"):
                tags = ["a", "b"]
                for product in li_tag.findAll(tags):
                    recipe.add_product(product.text.encode("utf-8"))

    for div_stats in soup.findAll("div", attrs={"class": "stats soc"}):
        stats = Stats()
        count = 0
        for ul in div_stats.findNext("ul"):
            value = ul.findNext("span").findNext("span").text.encode("utf-8")
            if count == 1:
                stats.total_views = value
            elif count == 2:
                stats.month_views = value
            elif count == 3:
                stats.weekly_views = value
            elif count == 4:
                if value == "-":
                    value = 0
                else:
                    stats.rating = value.split(" ")[0]
            elif count == 5:
                stats.times_cooked = value

            count += 1

        recipe.stats = stats

    for time_to_cook in soup.findAll("div", attrs={"class": "icb-tot"}):
        t = re.findall(r"\d+", time_to_cook.text)
        recipe.time_to_cook = t[0]

    profile_div = soup.find("div", {"class": "aub"})
    name = profile_div.findNext("a").text.encode("utf-8")
    rank = profile_div.findNext("div").text.encode("utf-8")

    plates = profile_div.find("span", {"class": "icb-plt"}).text.encode("utf-8")
    if "k" in plates:
        plates = re.findall(r"\d+", plates)
        plates = int(plates[0]) * 1000

    hats = profile_div.find("span", {"class": "icb-hat"}).text.encode("utf-8")
    if "k" in hats:
        hats = re.findall(r"\d+", hats)
        hats = int(hats[0]) * 1000

    hearts = profile_div.find("span", {"class": "icb-hrt"}).text.encode("utf-8")
    if "k" in hearts:
        hearts = re.findall(r"\d+", hearts)
        hearts = int(hearts[0]) * 1000

    profile = Profile(name, rank, plates, hats, hearts)
    recipe.author = profile

    data_holder.add_recipe(recipe)

for recipe in data_holder.get_recipes():
    print(recipe)
