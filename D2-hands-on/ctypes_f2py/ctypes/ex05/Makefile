SHELL=/bin/sh

data.so: data.c
	gcc -o $@ -shared -fPIC -Wall -O data.c

clean:
	rm -f *~ *.so *.o
