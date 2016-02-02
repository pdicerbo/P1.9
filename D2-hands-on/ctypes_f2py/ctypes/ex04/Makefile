SHELL=/bin/sh

sum.so: sum.c
	gcc -o $@ -shared -fPIC -Wall -O sum.c

clean:
	rm -f *~ *.so *.o
