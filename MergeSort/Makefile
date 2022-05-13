run: main.o MergeSort.o
	g++ -o run main.o MergeSort.o

main.o: main.cpp MergeSort.h
	g++ -c main.cpp

MergeSort.o: MergeSort.cpp MergeSort.h
	g++ -c MergeSort.cpp

clean: 
	rm *.o run
