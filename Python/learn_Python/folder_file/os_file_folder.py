import os
from os import listdir
import shutil
# os.rename both file must be on the same disk
#os.rename("path/to/current/file.foo", "path/to/new/destination/for/file.foo")

shutil.move("/home/dinhthong/Downloads/EECS-2014-117.pdf", "/media/dinhthong/DATA/EECS-2014-117.pdf")

#List all from a firectory
path='/home/dinhthong/Downloads/'
folder_list=os.listdir(path)
for item in folder_list:
    print item
