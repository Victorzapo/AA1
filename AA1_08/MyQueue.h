#pragma once
#include <iostream>

struct node {

	node* next;
	node* prev;
	int data;

	//node(int _data, node _prev, node _next)(data = _data; next = _next; prev = _prev);

};

class MyQueue
{
public:
	node* first;
	node* last;

	MyQueue();

	void push_back(int newData);
	void pop_back();
	void push_front(int newData);
	void pop_front();

	int front();
	int back();

	int getElementPos(int position);
	int maxElement();
	int minElement();
	void insert(int newElement, int position);

	void del(int pos);
	void delAll(int val);
	void delDuplicates();

	void change();
	int getNumElements();
	bool empty();



	bool operator ==(const MyQueue& Q1);
	
	void operator<<(MyQueue Q1);

	~MyQueue();	
};

