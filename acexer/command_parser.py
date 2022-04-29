import argparse


def parse_cmd():
    parses = argparse.ArgumentParser(description="Command information")
    parses.add_argument("-n", "--number", type=int, help="give number of dishes as an input", choices=range(1, 25))

    group = parses.add_mutually_exclusive_group(required=True)
    group.add_argument("-p", "--products", metavar="", type=str, help="give a list of products as a search criteria",
                       nargs="*")
    group.add_argument("-d", "--dish", metavar="", type=str, help="give a name of a dish as a search criteria")
    group.add_argument("-l", "--last-cooked", help="give input search criteria option 'last cooked'",
                       action="store_true")
    # parses.add_argument("-a", metavar="", type=str, help="give list of allergens as an input",
    #                     required=False, nargs="*")

    return parses.parse_args()
