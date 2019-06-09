
import pickle
from selenium import webdriver
import time
#from afile import save_cookie
#from selenium.webdriver.chrome.options import Options
#chrome_options = webdriver.ChromeOptions()
#chrome_options.add_argument("--disable-infobars")
#driver = webdriver.Firefox()
def save_cookie(driver, path):
    with open(path, 'wb') as filehandler:
        pickle.dump(driver.get_cookies(), filehandler)

def load_cookie(driver, path):
     with open(path, 'rb') as cookiesfile:
         cookies = pickle.load(cookiesfile)
         for cookie in cookies:
             driver.add_cookie(cookie)

driver = webdriver.Chrome()
driver.get('http://facebook.com')
time.sleep(30)
#foo = input()

save_cookie(driver, './cookie')





#header = driver.find_element_by_id("ProductImage")


#pickle.dump( driver.get_cookies() , open("cookies.pkl","wb"))
# start from your target element, here for example, "header"
#all_children_by_css = header.find_elements_by_css_selector("*")
#all_children_by_xpath = header.find_elements_by_xpath(".//*")
#print header.get_attribute();
#pickle.dump( driver.get_cookies() , open("cookies.pkl","wb"))
#print 'len(all_children_by_css): ' + str(header[0])
#print 'len(all_children_by_xpath): ' + str(len(all_children_by_xpath))
#save_cookie(driver, '/tmp/cookie')
