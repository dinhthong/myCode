x = [1, 2, 3,'hello']
x.append([4, 5])
print (x)
print " "
y = [1, 2, 3,'hello']
y.extend([4, 5])
print (y)
print " "
z=x
z.extend(y)
print z
print "Iterate using foreach"
#index use for loop
for item in z:
    print item
    #print
print "Print (index,value) pair for each element in the list"
for idex, val in enumerate(x):
    print (idex, val)
y_len= len(y)
print "Iterate a list using index"
for i in range(y_len):
    print y[i]
print "Print z[0:3]"
print z[3:7]
