#!/usr/bin/env python

from ctypes import *

# import DSO
dso = CDLL("./hello.so")

print "Calling DSO"
dso.hello()
print "Done"
