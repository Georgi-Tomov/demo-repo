import sys

from url_object import UrlMaker


def test():
    url = UrlMaker()

    if sys.argv[1] == "-h":
        if len(sys.argv) == 3:
            if sys.argv[2] == "-n":
                print("* -n <number of dishes>  give number of dishes as an input ")
                exit()
            elif sys.argv[2] == "-a":
                print("* -a <allergens>         give list of allergens as an input")
                exit()
            elif sys.argv[2] == "-l":
                print("* -l <last cooked>       give input search criteria option 'last cooked'")
                exit()
            elif sys.argv[2] == "-p":
                print("* -p <products>          give a list of products as a search criteria")
                exit()
            elif sys.argv[2] == "-d":
                print("* -d <dish>              give a name of a dish as a search criteria")
                exit()
            else:
                print("Unknown argument")
                exit()
        print("|----------------------------------H E L P-----------------------------------|")
        print("| * -h,                    show this help message and exit                   |")
        print("| * -n <number of dishes>  give number of dishes as an input                 |")
        print("| * -a <allergens>         give list of allergens as an input                |")
        print("| * -l <last cooked>       give input search criteria option 'last cooked'   |")
        print("| * -p <products>          give a list of products as a search criteria      |")
        print("| * -d <dish>              give a name of a dish as a search criteria        |")
        print("|----------------------------------------------------------------------------|")
        exit()
    if sys.argv[1] == "-n":
        if len(sys.argv) == 3:
            try:
                number_input = int(sys.argv[2])
                if number_input > 24 or number_input <= 0:
                    print("Wrong input after -n (must be integer between 1 and 24")
                    exit()
            except ValueError:
                print("Wrong input after -n (must be integer)")
                exit()
    if sys.argv[1] == "-p":
        if len(sys.argv) == 3:
            url.append_products(sys.argv[2])

    return url
