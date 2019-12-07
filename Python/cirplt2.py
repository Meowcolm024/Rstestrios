import matplotlib.pyplot as plt
import numpy as np

import matplotlib.pyplot as plt

circle1 = plt.Circle((0.5, 0.5), 0.2, color='r', fill=False)

fig, ax = plt.subplots() # note we must use plt.subplots, not plt.subplot
# (or if you have an existing figure)
# fig = plt.gcf()
# ax = fig.gca()

ax.add_artist(circle1)

plt.show()