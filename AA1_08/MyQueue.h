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

	void Push_back(int newData);
	void Pop_back();
	void Push_front(int newData);
	void Pop_front();

	int Front();
	int Back();

	int GetElementPos(int position);
	int MaxElement();
	int MinElement();
	void Insert(int newElement, int position);

	void Delete(int pos);
	void DeleteAll(int val);
	void DeleteDuplicates();

	void Change();
	int GetNumElements();
	bool Empty();



	bool operator == (const MyQueue& Q1);
	
	void  operator<<(const MyQueue Q1);

	~MyQueue();	
};

