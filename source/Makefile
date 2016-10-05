all: test1 test2 test3 test4 test5 test6

test1:	main.c
	gcc -o $@ $< -Wl,-rpath=`pwd`/../libA -L ./../libA -l test

test2:	main.c
	gcc -o $@ $< -Wl,-rpath=`pwd`/../libB -L ./../libB -l test

test3:	main.c
	gcc -o $@ $< -Wl,-rpath=`pwd`/../libA -L ./../libA -Wl,-rpath=`pwd`/../libB -L ./../libB -l test

test4:	main.c
	gcc -o $@ $< -Wl,-rpath=`pwd`/../libB -L ./../libB -Wl,-rpath=`pwd`/../libA -L ./../libA -l test

test5:	main.c
	gcc -o $@ $< -l test -Wl,-rpath=`pwd`/../libA -L ./../libA -Wl,-rpath=`pwd`/../libB -L ./../libB 

test6:	main.c
	gcc -o $@ $< -l test -Wl,-rpath=`pwd`/../libB -L ./../libB -Wl,-rpath=`pwd`/../libA -L ./../libA


test:
	./test1
	./test2
	./test3
	./test4
	./test5
	./test6

clean:
	@rm ./test1 ./test2 ./test3 ./test4 ./test5 ./test6
