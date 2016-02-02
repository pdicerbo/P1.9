#!/usr/bin/env python

from ctypes import *

# import DSO
dso = CDLL("./sum.so")

print "Calling DSO with ints"
isum = dso.sum_of_int(1,2)
print "Integer sum is: ", isum

# without prototypes by default the data type of c_int is assumed
dsum = dso.sum_of_double(1,2)
print "Double sum w/o prototypes is: ", dsum

dsum = dso.sum_of_double(c_double(1),c_double(2))
print "Double sum w/ casting is: ", dsum

#declare argument and return value
dso.sum_of_double.argtypes = [ c_double, c_double ]
dso.sum_of_double.restype = c_double
dsum = dso.sum_of_double(0.5,2.5)
print "Double sum w/ prototypes is: ", dsum

print "Done"
