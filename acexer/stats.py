class Stats:
    def __init__(self):
        self.total_views = 0
        self.month_views = 0
        self.weekly_views = 0
        self.rating = 0
        self.times_cooked = 0

    @property
    def total_views(self):
        return self.total_views

    @total_views.setter
    def total_views(self, value):
        self.total_views = value

    @property
    def month_views(self):
        return self.month_views

    @month_views.setter
    def month_views(self, value):
        self.month_views = value

    @property
    def weekly_views(self):
        return self.weekly_views

    @weekly_views.setter
    def weekly_views(self, value):
        self.weekly_views = value

    @property
    def rating(self):
        return self.rating

    @rating.setter
    def rating(self, value):
        self.rating = value

    @property
    def times_cooked(self):
        return self.times_cooked

    @times_cooked.setter
    def times_cooked(self, value):
        self.times_cooked = value

    def __str__(self):
        return "Total views - {}\nMonth views - {}\nWeekly views - {}\nRating - {}\nTimes cooked - {}".\
            format(self.total_views, self.month_views, self.weekly_views, self.rating, self.times_cooked)
