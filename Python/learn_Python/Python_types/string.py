import math
print 'The value of PI is approximately %5.3f.' % math.pi
cute = 4
print "If there was a birth every 7 seconds, there would be: ",cute,"births"
births = str(5)
print "there are {} births.".format(births)

format_list = ['five','three']
print "there are {} births and {} deaths".format(*format_list) #unpack the list
format_dictionary = {'births': 'five', 'deaths': 'three'}
print "there are {births} births, and {deaths} deaths".format(**format_dictionary) #yup, unpack the dictionary
abc=100;
print "If there was a birth every 7 seconds, there would be: %d births" % abc
