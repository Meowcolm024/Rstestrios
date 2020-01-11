import matplotlib.pyplot as plt
import numpy as np
import math
import random


x_r = []
y_r = []


def fractal(x0, x1, y0, y1, sp):
    l = math.sqrt((x1-x0)*(x1-x0)+(y1-y0)*(y1-y0))
    if l < 2 or sp >= 9:
        x_r.append(x0)
        x_r.append(x1)
        y_r.append(y0)
        y_r.append(y1)
        return
    r = random.random()+random.random()+random.random()-2
    x2 = (x0+x1)/2+float(s)*(y1-y0)*r
    y2 = (y0+y1)/2+float(s)*(x0-x1)*r
    sp = sp+1
    fractal(x0, x2, y0, y2, sp)
    fractal(x2, x1, y2, y1, sp)


s = 0
while True:
    if float(s) < 1 or float(s) >= 2:
        s = input("ratio 1 to 2\n")
    else:
        break
fractal(100, 412, 0, 0, 1)
plt.plot(x_r, y_r)
plt.show()
