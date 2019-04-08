#include "MyQueue.h"



void MyQueue::push_back(int newData)
{
	last->prev = new node;
	last->prev->data = newData;
	last->prev->next = last;
	last = last->prev;
}

MyQueue::MyQueue()
{
}


MyQueue::~MyQueue()
{
}
