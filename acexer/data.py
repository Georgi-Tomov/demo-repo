class Data:
    def __init__(self):
        self.__recipes_urls = []
        self.__recipes = []

    def add_recipe_url(self, url):
        self.__recipes_urls.append(url)

    @property
    def recipes_urls(self):
        return self.__recipes_urls
