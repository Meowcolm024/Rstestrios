# @Author: Meowcolm024

from __future__ import print_function
from random import randrange


def main():
    ans = randrange(0, 10)
    t = 1
    while t != 0:
        x = input("guess a number beween 0 ad 10: ")
        if not x.isdigit():
            print("please input a number")
            continue
        t = ans - int(x)
        if t < 0:
            print("The number is smaller")
        elif t > 0:
            print("The number is larger")
        else:
            print("Correct!")


if __name__ == "__main__":
    main()
