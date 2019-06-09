#For version 2.7 use this, not urllib.request
import urllib
page = urllib.urlopen('http://en.todoist.com/')
print(page.read())
#TotalAmount="hello world"
with open("Output.txt", "w") as text_file:
    text_file.write("Web's content: {0}".format(page.read()))
