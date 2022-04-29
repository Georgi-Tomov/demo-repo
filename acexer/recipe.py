class Recipe:
    def __init__(self, name, views, rating, times_cooked, time_to_cook):
        self.name = name
        self.products_needed = []
        self.views = views
        self.rating = rating
        self.times_cooked = times_cooked
        self.time_to_cook = time_to_cook
