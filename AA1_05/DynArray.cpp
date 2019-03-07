#include "DynArray.h"

DynArray::DynArray()
{

}

DynArray::DynArray(int _size)
{
	int *arr;

	arr = new int [size];
	
}

DynArray::DynArray(int _size, int value)
{
}

DynArray::DynArray(int * arr, int _size)
{
}

int * DynArray::begin()
{
	return nullptr;
}

int * DynArray::end()
{
	return nullptr;
}

void DynArray::resize(int n)
{
}

void DynArray::reserve(int n)
{
}

void DynArray::shrink()
{
}

bool DynArray::empty()
{
	return false;
}

int DynArray::maxSize()
{
	return 0;
}

int & DynArray::operator[](int n)
{
	// TODO: insertar una instrucción return aquí
}

int & DynArray::front()
{
	// TODO: insertar una instrucción return aquí
}

int & DynArray::back()
{
	// TODO: insertar una instrucción return aquí
}

void DynArray::push(int val)
{
}

void DynArray::pop()
{
}

void DynArray::insert(int position, int val)
{
}

void DynArray::erase(int position)
{
}

void DynArray::erase(int first, int last)
{
}

void DynArray::clear()
{
}

void DynArray::fill(int * first, int * last, int value)
{
}

void DynArray::copy(int * first, int * last, int * dest)
{
}

void DynArray::print()
{
}
