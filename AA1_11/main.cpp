#include <iostream>
#include <time.h>
#include "Order.h"
#include "Search.h"
#include "Utils.h"






int main() {
	
	srand(time(NULL));

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


	//Benchmarking//

	/*
	int *bs = utils::generate(100);
	order::bubbleSortR(bs, 100);

	float Itime = clock();
	order::insertionSort(bs, 100);
	float Ftime = clock();
	float time = (Ftime - Itime)/CLOCKS_PER_SEC;
	
	*/

	return 0;
}