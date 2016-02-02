from mpi4py import MPI
from ctypes import *

comm = MPI.COMM_WORLD
rank = comm.Get_rank()
print("\tin script: hello world from process %d" % rank)
mystring = create_string_buffer(b"hello world from process %d" % rank)

dso = CDLL("./hello.so")
dso.char_hello(mystring)
