import time
import random
from tkinter import *

# import image
image1 = "huaji.png"

# set number of balls
ballnum = 8

# set initial location
ballx0 = []
bally0 = []
for i in range(ballnum):
    ballx0.append(random.randint(25, 775))
    bally0.append(random.randint(25, 425))

# initialize location list
ballx = [([0]) for i in range(ballnum)]
bally = [([0]) for i in range(ballnum)]
for i in range(ballnum):
    ballx[i][0] = ballx0[i]
    bally[i][0] = bally0[i]

# randomize velocity
vx = []
vy = []
for i in range(ballnum):
    vx.append(random.uniform(1, 8))
    vy.append(random.uniform(1, 8))

# set border
x_min = 25.0
y_min = 25.0
x_max = 775.0
y_max = 425.0

# set fps
sleep_time = 0.015

# set steps
range_min = 1
range_max = 2000

# motion
new_x = [([0]) for i in range(ballnum)]
new_y = [([0]) for i in range(ballnum)]
for t in range(range_min, range_max):
    for k in range(ballnum):
        # set new location
        new_x[k] = ballx[k][t - 1] + vx[k]
        new_y[k] = bally[k][t - 1] + vy[k]
        # reverse
        if new_x[k] >= x_max or new_x[k] <= x_min:
            vx[k] = vx[k] * -1.0
        if new_y[k] >= y_max or new_y[k] <= y_min:
            vy[k] = vy[k] * -1.0
        # add to list
        ballx[k].append(new_x[k])
        bally[k].append(new_y[k])

# initialize form
window = Tk()
canvas = Canvas(width=800, height=450, bg='white')
canvas.pack()

photo1 = PhotoImage(file=image1)
width1 = photo1.width()
height1 = photo1.height()

# draw new image
balltag = ["a", "b", "c", "d", "e", "f", "g", "h"]   # change this list if ballnum is changed
for t in range(range_min, range_max):
    for m in range(ballnum):
        canvas.create_image(ballx[m][t], bally[m][t], image=photo1, tag=balltag[m])
    canvas.update()
    # remove image
    time.sleep(sleep_time)
    for m in range(ballnum):
        canvas.delete(balltag[m])

window.mainloop()
