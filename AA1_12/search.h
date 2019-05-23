#pragma once
#pragma once
#include <queue>

namespace search {
	int *linearSearchMultiple1(int a[], int length, int value) {
		//Cuadratico
		int size = 1;
		int *indexs = new int[size];
		


		for (int i = 0; i < length; i++) {
			if (a[i] == value) {
				if (size == 1) {
					indexs[0] = i;
					size++;
				}
				else {
					int *tmp = new int[size];
					for (int i = 0; i < size - 1; i++)
						tmp[i] = indexs[i];
					tmp[size - 1] = i;
					indexs = tmp;
					delete[] tmp;
					size++;
				}
			}
		}

		return indexs;
	}

	int *linearSearchMultiple2(int a[], int length, int value) {
		//
		int size = 0;
		int counter = 0;

		for (int i = 0; i < length; i++)
			if (value == a[i])
				size++;

		int *indexs = new int[size];

		for (int i = 0; i < length; i++) {
			if (value == a[i]) {
				indexs[counter] = i;
				counter++;
			}
		}


		return indexs;
	}

	int *linearSearchMultiple3(int a[], int length, int value) {

		int size = 0;
		int counter = 0;
		int *aux = new int[length];

		for (int i = 0; i < length; i++) {
			if (value == a[i]) {
				aux[counter] = i;
				counter++;
				size++;
			}
		}
		int *indexs = new int[size];

		for (int i = 0; i < size; i++)
			indexs[i] = aux[i];

		return indexs;
	}

	int *linearSearchMultiple4(int a[], int length, int value) {

		int size = 0;
		int counter = 0;
		std::queue<int> aux;

		for (int i = 0; i < length; i++) {
			if (value == a[i]) {
				aux.push(i);
				counter++;
				size++;
			}
		}
		int *indexs = new int[size];

		for (int i = 0; i < size; i++) {
			indexs[i] = aux.front();
			aux.pop();

		}

		return indexs;
	}

}