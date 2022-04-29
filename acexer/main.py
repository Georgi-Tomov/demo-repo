import requests
from bs4 import BeautifulSoup

from command_parser import parse_cmd
from custom_exceptions import NoResultsException
from url import Url

args = parse_cmd()

url = Url()
if args.products is not None:
    url.add_products_to_url(args.products)
elif args.last_cooked is not None and args.last_cooked is True:
    url.add_last_cooked_to_url()
elif args.dish is not None:
    url.add_dish_name_to_url(args.dish)

html = requests.get(url.__str__(), headers={"User-Agent": "agent"})
soup = BeautifulSoup(html.text, "html.parser")

# Store recipe urls
all_recipes = []

recipes = soup.findAll("a", attrs={"class": "title"})

if len(recipes) <= 0:
    raise NoResultsException
else:
    for recipe in range(args.number):
        url = recipes[recipe]["href"]
        all_recipes.append("{}{}".format(url.encode("utf-8"), "?s=1"))

for rec in all_recipes:
    print("{}".format(rec))
