# this is a makefile

run: clean build exec

build:
	clang -Wall function1.c function2.c function3.c main.c  -o main

exec:
	./main

clean:
	rm -rf  ./main
	rm -rf *.exe
	rm -rf *.o
