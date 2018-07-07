# -*- coding:utf-8 -*-
#本程序用于爬IMDB电影资料库top250信息
 
import requests
from bs4 import BeautifulSoup
import time
import csv
 
#获取html页面
def getHTMLText(url, k):
    try:
        url = url + str(k)
        headers = {'User-Agent':'Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:59.0) Gecko/20100101 Firefox/59.0'}    #伪装浏览器头
        r = requests.get(url,headers=headers)
        r.encoding = 'utf-8'
        return r.text
    except Exception as e:
        print(e)
        return ''
 
#获取电影信息
def getData(html):

    soup = BeautifulSoup(html, "html.parser")
    movieList = soup.find('div',attrs={'class':'ss-3 clear'})  # 找到第一个class属性值为ss-3 clear的div标签
    for movieLi in movieList.find_all('div',attrs={'class':'honghe'}):  # 找到所有class属性为honghe的div标签

        # 得到电影名字
        movieHd = movieLi.find('div', attrs={'class': 'honghe-3'})  # 找到第一个class属性值为honghe-3的div标签
        movieName = movieHd.find('p', attrs={'class': 'bb'}).getText()  # 找到第一个class属性值为bb的p标签
 
        #得到电影评分
        movieSpan = movieLi.find('div',attrs={'class':'honghe-2'})
        movielevel = movieSpan.find('span').find('i').getText()

        print movieName, movielevel, "\n"
 
#主程序
basicUrl = 'http://www.imdb.cn/imdb250/'
k = 1
while k <=9:
    html = getHTMLText(basicUrl, k)
    while html == '':
        time.sleep(20)
        html = getHTMLText(basicUrl, k)
    getData(html)
    k = k + 1