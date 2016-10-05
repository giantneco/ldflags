all: libtest.so

test.o: test.c
	gcc -I ../include -c -Wall -Werror -fpic -o $@ $<

libtest.so: test.o
	gcc -shared -o $@ $<

clean:
	rm -rf test.o libtest.so

test:
	@:
