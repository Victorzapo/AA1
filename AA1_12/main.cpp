#include "search.h"
#include "utils.h"
#include <iostream>
#include <time.h>
#include <chrono>

using namespace std::chrono;

int main() {

	srand(time(NULL));
	/*
	int a[5]{2,5,3,4,2};

	//1
	int *index1 = search::linearSearchMultiple1(a, 5, 2);

	std::cout << "Multiple 1:" << std::endl;
	for (int i = 0; i < 2; i++)
		std::cout << index1[i] << std::endl;

	//2

	int *index2 = search::linearSearchMultiple2(a, 5, 2);

	std::cout << "Multiple 2:" << std::endl;
	for (int i = 0; i < 2; i++)
		std::cout << index2[i] << std::endl;

	//3

	int *index3 = search::linearSearchMultiple3(a, 5, 2);

	std::cout << "Multiple 3:" << std::endl;
	for (int i = 0; i < 2; i++)
		std::cout << index3[i] << std::endl;

	//4

	int *index4 = search::linearSearchMultiple4(a, 5, 2);

	std::cout << "Multiple 4:" << std::endl;
	for (int i = 0; i < 2; i++)
		std::cout << index4[i] << std::endl;
		
		*/
			
		//BENCHMARK
		long long timeEx;

		//Array 100

		int *m1100 = utils::generate(100, 10);
		int *m2100 = utils::copy(m1100, 100);
		int *m3100 = utils::copy(m1100, 100);
		int *m4100 = utils::copy(m1100, 100);

		//Array 1000

		int *m11000 = utils::generate(1000, 10);
		int *m21000 = utils::copy(m11000, 1000);
		int *m31000 = utils::copy(m11000, 1000);
		int *m41000 = utils::copy(m11000, 1000);

		//Array 10000

		int *m110000 = utils::generate(10000, 10);
		int *m210000 = utils::copy(m110000, 10000);
		int *m310000 = utils::copy(m110000, 10000);
		int *m410000 = utils::copy(m110000, 10000);

		//Array 100000

		int *m1100000 = utils::generate(100000, 10);
		int *m2100000 = utils::copy(m1100000, 100000);
		int *m3100000 = utils::copy(m1100000, 100000);
		int *m4100000 = utils::copy(m1100000, 100000);

		std::cout << "M1: " << std::endl;
		//M1
			//100
		std::chrono::steady_clock::time_point start;
		start = high_resolution_clock::now();	
		search::linearSearchMultiple1(m1100, 100, 10);
		std::cout << "Linear Search Multiple 1 para 100 numeros: " << duration_cast<std::chrono::microseconds>(std::chrono::high_resolution_clock::now() - start).count() << " milisegundos" << std::endl;
			//1000
		start = high_resolution_clock::now();
		search::linearSearchMultiple1(m11000, 1000, 10);
		std::cout << "Linear Search Multiple 1 para 1000 numeros: " << duration_cast<std::chrono::microseconds>(std::chrono::high_resolution_clock::now() - start).count() << " milisegundos" << std::endl;
			//10000
		start = high_resolution_clock::now();	
		search::linearSearchMultiple1(m110000, 10000, 10);
		std::cout << "Linear Search Multiple 1 para 10000 numeros: " << duration_cast<std::chrono::microseconds>(std::chrono::high_resolution_clock::now() - start).count() << " milisegundos" << std::endl;
			//1000
		start = high_resolution_clock::now();
		search::linearSearchMultiple1(m1100000, 100000, 10);
		std::cout << "Linear Search Multiple 1 para 100000 numeros: " << duration_cast<std::chrono::microseconds>(std::chrono::high_resolution_clock::now() - start).count() << " milisegundos" << std::endl;	


		std::cout << "M2: " << std::endl;
		//M2
			//100
		start = high_resolution_clock::now();
		search::linearSearchMultiple2(m2100, 100, 10);
		std::cout << "Linear Search Multiple 2 para 100 numeros: " << duration_cast<std::chrono::microseconds>(std::chrono::high_resolution_clock::now() - start).count() << " milisegundos" << std::endl;
			//1000
		start = high_resolution_clock::now();
		search::linearSearchMultiple2(m21000, 1000, 10);
		std::cout << "Linear Search Multiple 2 para 1000 numeros: " << duration_cast<std::chrono::microseconds>(std::chrono::high_resolution_clock::now() - start).count() << " milisegundos" << std::endl;
			//10000
		start = high_resolution_clock::now();
		search::linearSearchMultiple2(m210000, 10000, 10);
		std::cout << "Linear Search Multiple 2 para 10000 numeros: " << duration_cast<std::chrono::microseconds>(std::chrono::high_resolution_clock::now() - start).count() << " milisegundos" << std::endl;
			//1000
		start = high_resolution_clock::now();
		search::linearSearchMultiple2(m2100000, 100000, 10);
		std::cout << "Linear Search Multiple 2 para 100000 numeros: " << duration_cast<std::chrono::microseconds>(std::chrono::high_resolution_clock::now() - start).count() << " milisegundos" << std::endl;


		std::cout << "M3: " << std::endl;
		//M3
			//100
		start = high_resolution_clock::now();
		search::linearSearchMultiple3(m3100, 100, 10);
		std::cout << "Linear Search Multiple 3 para 100 numeros: " << duration_cast<std::chrono::microseconds>(std::chrono::high_resolution_clock::now() - start).count() << " milisegundos" << std::endl;
			//1000
		start = high_resolution_clock::now();
		search::linearSearchMultiple3(m31000, 1000, 10);
		std::cout << "Linear Search Multiple 3 para 1000 numeros: " << duration_cast<std::chrono::microseconds>(std::chrono::high_resolution_clock::now() - start).count() << " milisegundos" << std::endl;
			//10000
		start = high_resolution_clock::now();
		search::linearSearchMultiple3(m310000, 10000, 10);
		std::cout << "Linear Search Multiple 3 para 10000 numeros: " << duration_cast<std::chrono::microseconds>(std::chrono::high_resolution_clock::now() - start).count() << " milisegundos" << std::endl;
			//1000
		start = high_resolution_clock::now();
		search::linearSearchMultiple3(m3100000, 100000, 10);
		std::cout << "Linear Search Multiple 3 para 100000 numeros: " << duration_cast<std::chrono::microseconds>(std::chrono::high_resolution_clock::now() - start).count() << " milisegundos" << std::endl;


		std::cout << "M4: " << std::endl;
		//M4
			//100
		start = high_resolution_clock::now();
		search::linearSearchMultiple4(m4100, 100, 10);
		std::cout << "Linear Search Multiple 4 para 100 numeros: " << duration_cast<std::chrono::microseconds>(std::chrono::high_resolution_clock::now() - start).count() << " milisegundos" << std::endl;
			//1000
		start = high_resolution_clock::now();
		search::linearSearchMultiple4(m41000, 1000, 10);
		std::cout << "Linear Search Multiple 4 para 1000 numeros: " << duration_cast<std::chrono::microseconds>(std::chrono::high_resolution_clock::now() - start).count() << " milisegundos" << std::endl;
			//10000
		start = high_resolution_clock::now();
		search::linearSearchMultiple4(m410000, 10000, 10);
		std::cout << "Linear Search Multiple 4 para 10000 numeros: " << duration_cast<std::chrono::microseconds>(std::chrono::high_resolution_clock::now() - start).count() << " milisegundos" << std::endl;
			//1000
		start = high_resolution_clock::now();
		search::linearSearchMultiple4(m4100000, 100000, 10);
		std::cout << "Linear Search Multiple 4 para 100000 numeros: " << duration_cast<std::chrono::microseconds>(std::chrono::high_resolution_clock::now() - start).count() << " milisegundos" << std::endl;


	

	// Algoritmo de chars

	char ch[9]{ 'A', 'B', 'C', 'Z', 'B', 'E', 'F', 'H', 'A' };

	int sep = utils::sepChar(ch, 9);

	
	return 0;
}