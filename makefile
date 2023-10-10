CC=g++
CFLAGS=-std=c++11 -Wall

all: main

main: main.cpp Adapter.cpp SQLSelect.cpp SQLFrom.cpp
	$(CC) $(CFLAGS) main.cpp Adapter.cpp SQLSelect.cpp SQLFrom.cpp -o main

clean:
	rm -f main
