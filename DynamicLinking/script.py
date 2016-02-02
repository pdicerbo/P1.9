from ctypes import *

dso = CDLL("./hello.so")

dso.hello()

tst = dso.sum_num(2, 3)

dso.char_hello(b"script.py")

print("\n\tExit from script\n")
