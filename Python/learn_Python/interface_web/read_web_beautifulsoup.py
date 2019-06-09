from bs4 import BeautifulSoup
from requests import get
r = get("https://en.todoist.com").text
print r
soup = BeautifulSoup(r, 'html.parser')
title = soup.title.string #I save the title to a variable rather then jus
with open('url.txt', 'w') as f:
    f.write(r)
