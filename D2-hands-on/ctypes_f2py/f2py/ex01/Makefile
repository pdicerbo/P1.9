SHELL=/bin/sh

hello.so: hello.f90
	f2py -c $< -m hello

clean:
	rm -f *~ *.so *.o
