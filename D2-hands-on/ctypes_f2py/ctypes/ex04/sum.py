#!/usr/bin/env python

from ctypes import *
from math import *

# import DSO
dso = CDLL("./sum.so")

# fill data structure
num = 10
ilist = (c_int * num)()
for i in range(1,num):
    ilist[i-1] = i

print "Calling DSO with ints"
dso.sum_of_ints.argtypes = [ POINTER(c_int), c_int ]
dso.sum_of_ints.restype = c_int
isum = dso.sum_of_ints(ilist,num)
print "Integer sum is: ", isum

########
# now implement the same for calling sum_of_doubles

print "Calling DSO with doubles"

print "Double sum is: ", dsum
