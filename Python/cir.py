import matplotlib.pyplot as plt
from math import pi
from random import random as rnd


def between(x: float, l: float, r: float) -> bool:
    if abs(l-r) < pi:
        return True if (l <= x and x <= r) or (l >= x and x >= r) else False
    else:
        if l < r:
            return True if (0 <= x <= l) or (r <= x < 2*pi) else False
        else:
            return True if (0 <= x <= r) or (l <= x < 2*pi) else False


def jump(n: float) -> float:
    return n + pi if n < pi else n - pi


def judge() -> bool:
    x = [rnd()*pi*2, rnd()*pi*2, rnd()*pi*2]
    return between(x[2], jump(x[0]), jump(x[1]))


v = [0, 0]

for i in range(100000):
    if judge():
        v[0] += 1
    else:
        v[1] += 1

plt.pie(v, labels=["IN", "OUT"], autopct='%1.1f%%')
plt.show()
