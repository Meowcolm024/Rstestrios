import matplotlib.pyplot as plt
import numpy as np
import random, math

x = []
for i in range(1000):
    x.append(random.random()*math.pi*2)

plt.hist(x)
plt.show()
