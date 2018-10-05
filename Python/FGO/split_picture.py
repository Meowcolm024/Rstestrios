from PIL import Image

def init():
    im2 = Image.open("test/t1.jpeg")
    img2_size = im2.size
    print("图片宽度和高度分别是{}".format(img2_size))
    gap = (img2_size[0] - 1920) / 2
    left = gap
    right = img2_size[0] - gap
    top = img2_size[1] / 2
    bottom = img2_size[1]
    print((left,top,right,bottom))
    region = im2.crop((left,top,right,bottom))
    region.save("out.jpeg")

def main():
    im = Image.open("out.jpeg")
    img_size = im.size
    xx = 5
    yy = 1
    x = img_size[0] // xx
    y = img_size[1] // yy
    for j in range(yy):
        for i in range(xx):
            left = i*x
            up = y*j
            right = left + x
            low = up + y
            region = im.crop((left,up,right,low))
            print((left,up,right,low))
            # temp = str(i)+str(j)
            region.save(f"{i}.jpeg")

init()
main()