#pragma once

namespace utils {

	int * generate(int length, long max) {

		int *a = new int[length];
		max++;

		for (int i = 0; i < length; i++)
			a[i] = rand() % max;

		return a;
	}

	int * copy(int a[], long length) {

		int *arr = new int[length];

		for (int i = 0; i < length; i++)
			arr[i] = a[i];

		return arr;
	}

	int sepChar(char a[], int size) {
		//Cuadratico
		char comp;
		int sepCounter = 0;
		int maxSep = 0;

		for (int i = 0; i < size; i++) {
			comp = a[i];

			if (maxSep < sepCounter)
				maxSep = sepCounter;

			sepCounter = 0;

			for (int j = i + 1; j < size; j++) {
				if (a[j] == comp) {
					sepCounter++;
					break;
					j = size + 1;
				}
				else if (j == size - 1) {
					sepCounter = 0;
					j = size;
				}
				else
					sepCounter++;
			}
		}


		return maxSep;

	}
}
