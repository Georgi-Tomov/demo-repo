class DataHolder:
    def __init__(self):
        self.recipe_urls = []
        self.recipes = []

    def get_recipe_urls(self):
        return self.recipe_urls

    def add_recipe_url(self, url):
        self.recipe_urls.append(url)

    def add_recipe(self, recipe):
        self.recipes.append(recipe)

    def get_recipes(self):
        return self.recipes
