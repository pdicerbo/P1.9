SHELL=/bin/sh

all: hello.so test-0 test-1

hello.so: hello.c
	gcc -o $@ -shared -fPIC -Wall -O hello.c

test-0: test-0.c
	gcc -o $@ -Wall -O test-0.c

test-1: test-1.c
	gcc -o $@ -Wall -O test-1.c -ldl

clean:
	rm -f *~ *.so *.o test-1 test-0
