class Url:
    BASE_URL = "https://recepti.gotvach.bg/"

    def __init__(self):
        self.url = Url.BASE_URL

    def add_products_to_url(self, products):
        self.url = "{}?kw={}".format(self.BASE_URL, " ".join(products))

    def add_last_cooked_to_url(self):
        self.url = "{}{}".format(self.BASE_URL, "cook")

    def add_dish_name_to_url(self, dish):
        self.url = "{}?kw={}".format(self.BASE_URL, dish)

    def __str__(self):
        return self.url
