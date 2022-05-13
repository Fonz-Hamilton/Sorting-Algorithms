run: main.o QuickSort.o
	g++ -o run main.o QuickSort.o

main.o: main.cpp QuickSort.h
	g++ -c main.cpp

QuickSort.o: QuickSort.cpp QuickSort.h
	g++ -c QuickSort.cpp

clean: 
	rm *.o run
