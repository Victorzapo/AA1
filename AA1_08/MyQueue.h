#pragma once

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

	void push_back(int newData);

	MyQueue();
	~MyQueue();
};

