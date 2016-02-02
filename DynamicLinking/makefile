CC=gcc
LIBS=-ldl
CFLAGS=-Wall -O

all: hello.so test-1.x # test-0.x

hello.so : hello.c
	$(CC) -shared -o $@ -fPIC -Wall -O $^

test-1.x: test-1.c
	$(CC) -o $@ $(CFLAGS) $^ $(LIBS)

test-0.x: test-0.c
	$(CC) -o $@ $(CFLAGS) $^

clean:
	rm -rf *.o *.x *.so *~
