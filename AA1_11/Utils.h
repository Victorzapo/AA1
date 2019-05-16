#pragma once
#include <iostream>
#include <time.h>

namespace utils {

	void print(int a[], int length) {

		for (int i = 0; i < length; i++)
			std::cout << a[i] << std::endl;

	}

	int * generate(int length) {

		int *a = new int [length];

		for (int i = 0; i < length; i++)
			a[i] = rand() % 1000;

		return a;
	}

	int * generate(int length, int max) {

		int *a = new int[length];
		max++;

		for (int i = 0; i < length; i++)
			a[i] = rand() % max;

		return a;
	}
}