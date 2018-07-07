import requests 

url = 'https://movie.douban.com/top250' 
con = requests.get(url).content

# coding:utf-8 
import requests 
from lxml import html 

url = 'https://movie.douban.com/top250' 
con = requests.get(url).content 
sel = html.fromstring(con) 

# 所有的信息都在class属性为info的div标签里，可以先把这个节点取出来 
for i in sel.xpath('//div[@class="info"]'): 
    # 影片名称 
    title = i.xpath('div[@class="hd"]/a/span[@class="title"]/text()')[0] 
    info = i.xpath('div[@class="bd"]/p[1]/text()') 
    # 制片国家 
    country = info[1].replace(" ", "").replace("\n", "").split("/")[1] 
    # 评分 
    rate = i.xpath('div[@class="bd"]/div[@class="star"]/span[2]/text()')[0] 
    # 打印结果看看 
    print "《", title, "》", rate, country, "\n",