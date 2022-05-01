class Recipe:
    def __init__(self):
        self.name = ""
        self.products_needed = []
        self.time_to_cook = 0
        self.stats = None
        self.author = None

    def add_product(self, product):
        self.products_needed.append(product)

    @property
    def name(self):
        return self.name

    @name.setter
    def name(self, value):
        self.name = value

    @property
    def time_to_cook(self):
        return self.time_to_cook

    @time_to_cook.setter
    def time_to_cook(self, value):
        self.time_to_cook = value

    @property
    def stats(self):
        return self.stats

    @stats.setter
    def stats(self, value):
        self.stats = value

    @property
    def author(self):
        return self.author

    @author.setter
    def author(self, value):
        self.author = value

    def __str__(self):
        return "--- {} - {} min ---\n-> {}\n======= Stats =======\n{}\n======= Author =======\n{}\n".\
            format(self.name, self.time_to_cook,
                   "\n-> ".join([str(x) for x in self.products_needed]),
                   self.stats,
                   self.author)
