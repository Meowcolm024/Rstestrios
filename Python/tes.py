from PIL import Image
from pytesseract import image_to_string

img = Image.open("t10.jpeg")
text = image_to_string(img)
print(text)