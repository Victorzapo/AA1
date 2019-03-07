#include "DynArray.h"
#include <iostream>

//Constructors

DynArray::DynArray()
{
	capacity = DYN_ARRAY_DEFAULT_SIZE;
	size = 0;
	data = new int[capacity];

}

DynArray::DynArray(int _size)
{
	size = _size;
	data = new int [_size];
	
}

DynArray::DynArray(int _size, int value)
{

	size = _size;

	data = new int[_size];

	for (int i = 0; i < _size; i++) {

		data[i] = value;

	}

}

DynArray::DynArray(int * arr, int _size)
{
	size = _size;

	data = new int[_size];

	for (int i = 0; i < _size; i++) {


		data[i] = arr[i] ;

	}
}

//Iterator

int * DynArray::begin()
{
	return data;
}

int * DynArray::end()
{
	return data + (size - 1);
}

//Functions
void DynArray::resize(int n)
{
  size = n;
  capacity = size * 2;
}

void DynArray::reserve(int n)
{
	capacity = n * 2;


}

void DynArray::shrink()
{
	capacity = size;
}

bool DynArray::empty()
{
	if (size == 0)
		return true;
	return false;
}

int DynArray::maxSize()
{
	return DYN_ARRAY_MAX_SIZE;
}

//element access functions

int & DynArray::operator[](int n)
{
	

	


	// TODO: insertar una instrucción return aquí
	return data[n]; 
}

int & DynArray::front()
{
	return data[0];
}

int & DynArray::back()
{
	return data[size - 1];
}

//// modifiers functions

void DynArray::push(int val)
{
	int *aux;
	aux = new int[size];
	size++;
	if (size < capacity) {
		
		for (int i = 0; i < size - 2; i++) {
			aux[i] = data[i];
		}
		aux[size] = val;
		data = aux;
		
	}
	else
	data[size-1] = val;
	
	
}

void DynArray::pop()
{
	size--;
}

void DynArray::insert(int position, int val)
{
	size++;
	int *aux = new int[size];

	for (int i = 0; i <= size; i++) {
		if (i < position) aux[i] = data[i];
		if (i == position) aux[i] = val;
		if (i > position) aux[i] = data[i - 1];
	}

	data = aux;

}

void DynArray::erase(int position)
{
	
	int *aux = new int[size - 1];

	for (int i = 0; i <= size; i++) {
		if (i < position) aux[i] = data[i];
		if (i >= position) aux[i] = data[i + 1];
	}

	size--;
	data = aux;


}

void DynArray::erase(int first, int last)
{


}

void DynArray::clear()
{
	data = new int[0];
	size = 0;


}

void DynArray::fill(int * first, int * last, int value)
{
}

void DynArray::copy(int * first, int * last, int * dest)
{
}

void DynArray::print()
{
	for (int i = 0; i < size; i++)
		std::cout << data[i] << std::endl;

}
