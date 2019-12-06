import random, math
import matplotlib.pyplot as plt

def between(x, l, r) -> bool:
    if (l <= x and x <= r) or (l >= x and x >= r):
        return True
    return False

def cir() -> bool:
    x = [random.random()*math.pi*2, random.random()*math.pi*2, random.random()*math.pi*2]
    return between(x[2], (x[0] + math.pi), (x[1] + math.pi))

v = [0,0]

for i in range(100000):
    if cir():
        v[0] += 1
    else:
        v[1] += 1

la = ["IN", "OFF"]

plt.pie(v, explode=None, labels=la, autopct='%1.1f%%')
plt.show()
