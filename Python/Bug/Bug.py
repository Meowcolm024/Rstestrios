from tkinter import *
import time

img1 = "bug.png"
img2 = "bugr.png"

x0 = 30
y0 = 225

x = []
y = []

x.append(x0)
y.append(y0)

vx = 5

sleep_time = 0.015

x_min = 25.0
x_max = 775.0

range_min = 1
range_max = 2000

new_x = []
new_y = []

for t in range(range_min, range_max):
    new_x = x[t - 1] + vx
    if new_x >= x_max or new_x <= x_min:
            vx = vx * -1.0
    x.append(new_x)


window = Tk()
canvas = Canvas(width=800, height=450, bg='white')
canvas.pack()

photo1 = PhotoImage(file=img1)
photo2 = PhotoImage(file=img2)

for t in range(range_min, range_max):
    if vx > 0:
        canvas.create_image(x[t], y0, image=photo1, tag='a')
    if vx < 0:
        canvas.create_image(x[t], y0, image=photo2, tag='b')

    canvas.update

    time.sleep(sleep_time)

    if vx > 0:
        canvas.delete('a')
    if vx < 0:
        canvas.delete('b')

window.mainloop()