class Profile:
    def __init__(self, name, rank, plates, hats, hearts):
        self.name = name
        self.rank = rank
        self.plates = plates
        self.hats = hats
        self.hearts = hearts

    def get_plates_hats_hearts(self):
        return self.plates + self.hats + self.hearts

    def __str__(self):
        return "Name: {}\nRank: {}\nPlates: {}\nHats: {}\nHearts: {}".\
            format(self.name, self.rank, self.plates, self.hats, self.hearts)


