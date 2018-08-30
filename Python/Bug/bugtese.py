import time
import random
from tkinter import *

# import image
image1 = "bugr.png"
image2 = "bug.png"

# set number of balls
ballnum = 1

# set initial location
ballx0 = []
bally0 = []
for i in range(ballnum):
    ballx0.append(25)
    bally0.append(225)

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
    vx.append(5)
    vy.append(0)

# set border
x_min = -100.0
y_min = -100.0
x_max = 900.0
y_max = 550.0

# set fps
sleep_time = 0.015

# set steps
range_min = 1
range_max = 2000

l = [0 for i in range(1,2001)]
r = [0 for i in range(1,2001)]

# motion
new_x = [([0]) for i in range(ballnum)]
new_y = [([0]) for i in range(ballnum)]
for t in range(range_min, range_max):
    for k in range(ballnum):
        # set new location
        new_x[k] = ballx[k][t - 1] + vx[k]
        new_y[k] = bally[k][t - 1] + vy[k]
        # reverse
        if new_x[k] >= x_max:
            vx[k] = vx[k] * -1.0
        if new_x[k] <= x_min:
            vx[k] = vx[k] * -1.0
        if new_y[k] >= y_max or new_y[k] <= y_min:
            vy[k] = vy[k] * -1.0
        if vx[k] > 0:
            r[t] = t
        if vx[k] < 0:
            l[t] = t
        # add to list
        ballx[k].append(new_x[k])
        bally[k].append(new_y[k])
    

# initialize form
window = Tk()
canvas = Canvas(width=800, height=450, bg='white')
canvas.pack()

photo1 = PhotoImage(file=image1)
photo2 = PhotoImage(file=image2)

# draw new image
balltag = ["a", "b", "c", "d", "e", "f", "g", "h"]   # change this list if ballnum is changed
for t in range(range_min, range_max):
    for m in range(ballnum):
        if t == l[t]:
            canvas.create_image(ballx[m][t], bally[m][t], image=photo1, tag=balltag[m])
        if t == r[t]:
            canvas.create_image(ballx[m][t], bally[m][t], image=photo2, tag=balltag[m])
    canvas.update()
    # remove image
    time.sleep(sleep_time)
    for m in range(ballnum):
        canvas.delete(balltag[m])

window.mainloop()
