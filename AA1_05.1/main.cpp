#include <iostream>
#include "DynArray.h"


int main() {

	DynArray arr(16);

	arr[0] = 3;
	arr[1] = 1;
	arr[2] = 5;
	arr[3] = 2;

	arr.push(6);


	arr.print();


	return 0;
}