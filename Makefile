all: main

main: main.o Trace.o
	g++ -o main main.o Trace.o

main.o: main.cpp Trace.o Trace.h
	g++ -c main.cpp

Trace.o: Trace.cpp Trace.h Tracebuffer.h
	g++ -c Trace.cpp

clean:
	rm -f main *.o
