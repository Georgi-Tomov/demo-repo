from urllib.parse import urlencode, urlunsplit


class UrlMaker:
    BASE_URL = "https://recepti.gotvach.bg/"

    def __init__(self):
        self.__url = UrlMaker.BASE_URL

    def append_products(self, string):
        params = urlencode(dict(kw=string))
        self.__url = urlunsplit(("", "", UrlMaker.BASE_URL, params, ""))

    @property
    def get_url(self):
        return self.__url
