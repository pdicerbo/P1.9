SHELL=/bin/sh

hello.so: hello.c
	gcc -o $@ -shared -fPIC -Wall -O hello.c

clean:
	rm -f *~ *.so *.o
