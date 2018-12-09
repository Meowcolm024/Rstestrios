from PIL import Image
from pytesseract import image_to_string

img = Image.open("t10.jpeg")
text = pytesserimage_to_string(img)
print(text)