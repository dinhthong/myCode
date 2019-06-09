import mechanize
from bs4 import BeautifulSoup
import urllib2
import cookielib

cj = cookielib.CookieJar()
br = mechanize.Browser()
br.set_cookiejar(cj)
br.open("http://facebook.com")

br.select_form(nr=0)
br.form['username'] = 'dinhthongelite@gmail.com'
br.form['password'] = 'asdfghjklLKJ'
br.submit()

print br.response().read()
