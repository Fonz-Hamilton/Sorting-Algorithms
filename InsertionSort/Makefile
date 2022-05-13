run: main.o InSort.o
	g++ -o run main.o InSort.o

main.o: main.cpp InSort.h
	g++ -c main.cpp

InSort.o: InSort.cpp InSort.h
	g++ -c InSort.cpp

clean: 
	rm *.o run
