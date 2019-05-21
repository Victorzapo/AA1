#include <iostream>
#include <time.h>
#include <chrono>
#include "Order.h"
#include "Search.h"
#include "Utils.h"




using namespace std::chrono;

int main() {
	
	srand(time(NULL));
	/*
	//Func Order Check//

	int arrA[7]{ 2,3,4,5,6,7,8 };

	bool asc = order::isAscending(arrA, 7);
	
	int arrD[7]{8,7,6,5,4,3,2};

	bool des = order::isDescending(arrD, 7);

	//Func Serach Check//
	
	int arrLS[7]{ 4,2,4,6,4,1,4 };

	int *indexs = search::linearSearchAllIndex(arrLS, 7, 4);
	
	std::cout << "Positions of the number: " << std::endl;
	utils::print(indexs, 7);

	int arrBSR[7]{ 2,4,4,5,6,7,8 };

	int pos = search::binarySearchR(arrBSR, 7, 4);


	//Func Utils Check//

	std::cout << "Array print: " << std::endl;

	utils::print(arrBSR, 7);
	
	int *rG = utils::generate(5);
	std::cout << "Random array of 5 positions: " << std::endl;
	utils::print(rG, 5);

	int *rGM = utils::generate(5, 3);
	std::cout << "Random array of 5 positions and max number is 3: " << std::endl;
	utils::print(rGM, 5);
	*/

	//Benchmarking//

	//100 desordenado
	int *BubSdes100 = utils::generate(100, 10000);
	int *SelcSdes100 = utils::copy(BubSdes100, 100);
	int *InsSdes100 = utils::copy(BubSdes100, 100);
	//1000 desordenado
	int *BubSdes1000 = utils::generate(1000, 100000);
	int *SelcSdes1000 = utils::copy(BubSdes1000, 1000);
	int *InsSdes1000 = utils::copy(BubSdes1000, 1000);
	//10000 desordenado
	int *BubSdes10000 = utils::generate(10000, 1000000);
	int *SelcSdes10000 = utils::copy(BubSdes10000, 10000);
	int *InsSdes10000 = utils::copy(BubSdes10000, 10000);
	//100000 desordenado
	int *BubSdes100000 = utils::generate(100000, 100000000);
	int *SelcSdes100000 = utils::copy(BubSdes100000, 100000);
	int *InsSdes100000 = utils::copy(BubSdes100000, 100000);
	
	
	std::cout << "100" << std::endl;
	/////////////////////////////////////////100///////////////////////////////////////////////////////////////////
	std::cout << "Desordenados:" << std::endl << std::endl;
	//Ordenar 100 bubble
	steady_clock::time_point t1 = steady_clock::now();
	order::bubbleSort(BubSdes100, 100);
	steady_clock::time_point t2 = steady_clock::now();
	duration<double> time_span = duration_cast<duration<double>>(t2 - t1);
	std::cout << "Bubble Sort 100 Desordenado: " << time_span.count() << " seconds." << std::endl;

	//Ordenar 100 selection
	t1 = steady_clock::now();
	order::selectionSort(SelcSdes100, 100);
	t2 = steady_clock::now();
	time_span = duration_cast<duration<double>>(t2 - t1);
	std::cout << "Selection Sort 100 Desordenado: " << time_span.count() << " seconds." << std::endl;

	//Ordenar 100 insertion
	t1 = steady_clock::now();
	order::insertionSort(InsSdes100, 100);
	t2 = steady_clock::now();
	time_span = duration_cast<duration<double>>(t2 - t1);
	std::cout << "Insertion Sort 100 Desordenado: " << time_span.count() << " seconds." << std::endl << std::endl;
	
	std::cout << "Ordenados:" << std::endl << std::endl;
	//Ordenar 100 bubble
	t1 = steady_clock::now();
	order::bubbleSort(BubSdes100, 100);
	t2 = steady_clock::now();
	time_span = duration_cast<duration<double>>(t2 - t1);
	std::cout << "Bubble Sort 100 ordenado: " << time_span.count() << " seconds." << std::endl;

	//Ordenar 100 selection
	t1 = steady_clock::now();
	order::selectionSort(SelcSdes100, 100);
	t2 = steady_clock::now();
	time_span = duration_cast<duration<double>>(t2 - t1);
	std::cout << "Selection Sort 100 ordenado: " << time_span.count() << " seconds." << std::endl;

	//Ordenar 100 insertion
	t1 = steady_clock::now();
	order::insertionSort(InsSdes100, 100);
	t2 = steady_clock::now();
	time_span = duration_cast<duration<double>>(t2 - t1);
	std::cout << "Insertion Sort 100 ordenado: " << time_span.count() << " seconds." << std::endl << std::endl;

	std::cout << "Invertidos:" << std::endl << std::endl;
	//Ordenar 100 bubble
	order::bubbleSortR(BubSdes100, 100);
	t1 = steady_clock::now();
	order::bubbleSort(BubSdes100, 100);
	t2 = steady_clock::now();
	time_span = duration_cast<duration<double>>(t2 - t1);
	std::cout << "Bubble Sort 100 invertido: " << time_span.count() << " seconds." << std::endl;

	//Ordenar 100 selection
	order::bubbleSortR(SelcSdes100, 100);
	t1 = steady_clock::now();
	order::selectionSort(SelcSdes100, 100);
	t2 = steady_clock::now();
	time_span = duration_cast<duration<double>>(t2 - t1);
	std::cout << "Selection Sort 100 invertido: " << time_span.count() << " seconds." << std::endl;

	//Ordenar 100 insertion
	order::bubbleSortR(InsSdes100, 100);
	t1 = steady_clock::now();
	order::insertionSort(InsSdes100, 100);
	t2 = steady_clock::now();
	time_span = duration_cast<duration<double>>(t2 - t1);
	std::cout << "Insertion Sort 100 invertido: " << time_span.count() << " seconds." << std::endl << std::endl;

	std::cout << "1000" << std::endl;
	/////////////////////////////////////////1000///////////////////////////////////////////////////////////////////
	std::cout << "Desordenados:" << std::endl << std::endl;
	//Ordenar 1000 bubble
	t1 = steady_clock::now();
	order::bubbleSort(BubSdes1000, 1000);
	t2 = steady_clock::now();
	time_span = duration_cast<duration<double>>(t2 - t1);
	std::cout << "Bubble Sort 1000 Desordenado: " << time_span.count() << " seconds." << std::endl;

	//Ordenar 1000 selection
	t1 = steady_clock::now();
	order::selectionSort(SelcSdes1000, 1000);
	t2 = steady_clock::now();
	time_span = duration_cast<duration<double>>(t2 - t1);
	std::cout << "Selection Sort 1000 Desordenado: " << time_span.count() << " seconds." << std::endl;

	//Ordenar 1000 insertion
	t1 = steady_clock::now();
	order::insertionSort(InsSdes1000, 1000);
	t2 = steady_clock::now();
	time_span = duration_cast<duration<double>>(t2 - t1);
	std::cout << "Insertion Sort 1000 Desordenado: " << time_span.count() << " seconds." << std::endl << std::endl;

	std::cout << "Ordenados:" << std::endl << std::endl;
	//Ordenar 1000 bubble
	t1 = steady_clock::now();
	order::bubbleSort(BubSdes1000, 1000);
	t2 = steady_clock::now();
	time_span = duration_cast<duration<double>>(t2 - t1);
	std::cout << "Bubble Sort 1000 ordenado: " << time_span.count() << " seconds." << std::endl;

	//Ordenar 1000 selection
	t1 = steady_clock::now();
	order::selectionSort(SelcSdes1000, 1000);
	t2 = steady_clock::now();
	time_span = duration_cast<duration<double>>(t2 - t1);
	std::cout << "Selection Sort 1000 ordenado: " << time_span.count() << " seconds." << std::endl;

	//Ordenar 1000 insertion
	t1 = steady_clock::now();
	order::insertionSort(InsSdes1000, 1000);
	t2 = steady_clock::now();
	time_span = duration_cast<duration<double>>(t2 - t1);
	std::cout << "Insertion Sort 1000 ordenado: " << time_span.count() << " seconds." << std::endl << std::endl;

	std::cout << "Invertidos:" << std::endl << std::endl;
	//Ordenar 1000 bubble
	order::bubbleSortR(BubSdes1000, 1000);
	t1 = steady_clock::now();
	order::bubbleSort(BubSdes1000, 1000);
	t2 = steady_clock::now();
	time_span = duration_cast<duration<double>>(t2 - t1);
	std::cout << "Bubble Sort 1000 invertido: " << time_span.count() << " seconds." << std::endl;

	//Ordenar 1000 selection
	order::bubbleSortR(SelcSdes1000, 1000);
	t1 = steady_clock::now();
	order::selectionSort(SelcSdes1000, 1000);
	t2 = steady_clock::now();
	time_span = duration_cast<duration<double>>(t2 - t1);
	std::cout << "Selection Sort 1000 invertido: " << time_span.count() << " seconds." << std::endl;

	//Ordenar 1000 insertion
	order::bubbleSortR(InsSdes100, 1000);
	t1 = steady_clock::now();
	order::insertionSort(InsSdes1000, 1000);
	t2 = steady_clock::now();
	time_span = duration_cast<duration<double>>(t2 - t1);
	std::cout << "Insertion Sort 1000 invertido: " << time_span.count() << " seconds." << std::endl <<std::endl;

	std::cout << "10000" << std::endl;
	/////////////////////////////////////////10000///////////////////////////////////////////////////////////////////
	std::cout << "Desordenados:" << std::endl << std::endl;
	//Ordenar 10000 bubble
	t1 = steady_clock::now();
	order::bubbleSort(BubSdes10000, 10000);
	t2 = steady_clock::now();
	time_span = duration_cast<duration<double>>(t2 - t1);
	std::cout << "Bubble Sort 10000 Desordenado: " << time_span.count() << " seconds." << std::endl;

	//Ordenar 10000 selection
	t1 = steady_clock::now();
	order::selectionSort(SelcSdes1000, 10000);
	t2 = steady_clock::now();
	time_span = duration_cast<duration<double>>(t2 - t1);
	std::cout << "Selection Sort 10000 Desordenado: " << time_span.count() << " seconds." << std::endl;

	//Ordenar 10000 insertion
	t1 = steady_clock::now();
	order::insertionSort(InsSdes10000, 10000);
	t2 = steady_clock::now();
	time_span = duration_cast<duration<double>>(t2 - t1);
	std::cout << "Insertion Sort 10000 Desordenado: " << time_span.count() << " seconds." << std::endl << std::endl;

	std::cout << "Ordenados:" << std::endl << std::endl;
	//Ordenar 10000 bubble
	t1 = steady_clock::now();
	order::bubbleSort(BubSdes10000, 10000);
	t2 = steady_clock::now();
	time_span = duration_cast<duration<double>>(t2 - t1);
	std::cout << "Bubble Sort 10000 ordenado: " << time_span.count() << " seconds." << std::endl;

	//Ordenar 10000 selection
	t1 = steady_clock::now();
	order::selectionSort(SelcSdes10000, 10000);
	t2 = steady_clock::now();
	time_span = duration_cast<duration<double>>(t2 - t1);
	std::cout << "Selection Sort 10000 ordenado: " << time_span.count() << " seconds." << std::endl;

	//Ordenar 10000 insertion
	t1 = steady_clock::now();
	order::insertionSort(InsSdes10000, 10000);
	t2 = steady_clock::now();
	time_span = duration_cast<duration<double>>(t2 - t1);
	std::cout << "Insertion Sort 10000 ordenado: " << time_span.count() << " seconds." << std::endl << std::endl;

	std::cout << "Invertidos:" << std::endl << std::endl;
	//Ordenar 10000 bubble
	order::bubbleSortR(BubSdes1000, 10000);
	t1 = steady_clock::now();
	order::bubbleSort(BubSdes1000, 10000);
	t2 = steady_clock::now();
	time_span = duration_cast<duration<double>>(t2 - t1);
	std::cout << "Bubble Sort 10000 invertido: " << time_span.count() << " seconds." << std::endl;

	//Ordenar 10000 selection
	order::bubbleSortR(SelcSdes10000, 10000);
	t1 = steady_clock::now();
	order::selectionSort(SelcSdes10000, 10000);
	t2 = steady_clock::now();
	time_span = duration_cast<duration<double>>(t2 - t1);
	std::cout << "Selection Sort 10000 invertido: " << time_span.count() << " seconds." << std::endl;

	//Ordenar 10000 insertion
	order::bubbleSortR(InsSdes10000, 10000);
	t1 = steady_clock::now();
	order::insertionSort(InsSdes10000, 10000);
	t2 = steady_clock::now();
	time_span = duration_cast<duration<double>>(t2 - t1);
	std::cout << "Insertion Sort 10000 invertido: " << time_span.count() << " seconds." << std::endl <<std::endl ;

	/////////////////////////////////////////100000///////////////////////////////////////////////////////////////////
	std::cout << "Desordenados:" << std::endl << std::endl;
	//Ordenar 100000 bubble
	t1 = steady_clock::now();
	order::bubbleSort(BubSdes100000, 100000);
	t2 = steady_clock::now();
	time_span = duration_cast<duration<double>>(t2 - t1);
	std::cout << "Bubble Sort 100000 Desordenado: " << time_span.count() << " seconds." << std::endl;

	//Ordenar 100000 selection
	t1 = steady_clock::now();
	order::selectionSort(SelcSdes100000, 100000);
	t2 = steady_clock::now();
	time_span = duration_cast<duration<double>>(t2 - t1);
	std::cout << "Selection Sort 100000 Desordenado: " << time_span.count() << " seconds." << std::endl;

	//Ordenar 100000 insertion
	t1 = steady_clock::now();
	order::insertionSort(InsSdes100000, 100000);
	t2 = steady_clock::now();
	time_span = duration_cast<duration<double>>(t2 - t1);
	std::cout << "Insertion Sort 100000 Desordenado: " << time_span.count() << " seconds." << std::endl << std::endl;

	std::cout << "Ordenados:" << std::endl << std::endl;
	//Ordenar 100000 bubble
	t1 = steady_clock::now();
	order::bubbleSort(BubSdes100000, 100000);
	t2 = steady_clock::now();
	time_span = duration_cast<duration<double>>(t2 - t1);
	std::cout << "Bubble Sort 100000 ordenado: " << time_span.count() << " seconds." << std::endl;

	//Ordenar 100000 selection
	t1 = steady_clock::now();
	order::selectionSort(SelcSdes100000, 100000);
	t2 = steady_clock::now();
	time_span = duration_cast<duration<double>>(t2 - t1);
	std::cout << "Selection Sort 100000 ordenado: " << time_span.count() << " seconds." << std::endl;

	//Ordenar 100000 insertion
	t1 = steady_clock::now();
	order::insertionSort(InsSdes100000, 100000);
	t2 = steady_clock::now();
	time_span = duration_cast<duration<double>>(t2 - t1);
	std::cout << "Insertion Sort 100000 ordenado: " << time_span.count() << " seconds." << std::endl << std::endl;

	std::cout << "Invertidos:" << std::endl << std::endl;
	//Ordenar 100000 bubble
	order::bubbleSortR(BubSdes10000, 100000);
	t1 = steady_clock::now();
	order::bubbleSort(BubSdes10000, 100000);
	t2 = steady_clock::now();
	time_span = duration_cast<duration<double>>(t2 - t1);
	std::cout << "Bubble Sort 100000 invertido: " << time_span.count() << " seconds." << std::endl;

	//Ordenar 100000 selection
	order::bubbleSortR(SelcSdes100000, 100000);
	t1 = steady_clock::now();
	order::selectionSort(SelcSdes100000, 100000);
	t2 = steady_clock::now();
	time_span = duration_cast<duration<double>>(t2 - t1);
	std::cout << "Selection Sort 100000 invertido: " << time_span.count() << " seconds." << std::endl;

	//Ordenar 100000 insertion
	order::bubbleSortR(InsSdes100000, 100000);
	t1 = steady_clock::now();
	order::insertionSort(InsSdes100000, 100000);
	t2 = steady_clock::now();
	time_span = duration_cast<duration<double>>(t2 - t1);
	std::cout << "Insertion Sort 100000 invertido: " << time_span.count() << " seconds." << std::endl;
	

	return 0;
}