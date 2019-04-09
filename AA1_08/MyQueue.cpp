#include "MyQueue.h"



void MyQueue::push_back(int newData)
{
	last->prev = new node;
	last->prev->data = newData;
	last->prev->next = last;
	last = last->prev;
	last->prev = nullptr;
}

void MyQueue::pop_back()
{
	last = last->next;
	last->prev = nullptr;
}

void MyQueue::push_front(int newData)
{
	first->next = new node;
	first->next->data = newData;
	first->next->prev = first;
	first = first->next;

}

void MyQueue::pop_front()
{
	first = first->prev;
	first->next = nullptr;

}

int MyQueue::front()
{
	return first->data;
}

int MyQueue::back()
{
	return last->data;
}

int MyQueue::getElementPos(int position)
{
  	node* tmp = first;

	for (int i = 0; i < position; i++) {
		tmp = tmp->prev;
	}
	return tmp->data;
}

int MyQueue::maxElement()
{
	int max = 0;
	node* tmp = first;

	while (tmp != nullptr) {
		if (tmp->data > max)
			max = tmp->data;
		tmp = tmp->prev;
	}

	return max;
}

int MyQueue::minElement()
{
	node* tmp = first;
	int min = tmp->data;

	while (tmp != nullptr) {
		if (tmp->data < min)
			min = tmp->data;
		tmp = tmp->prev;
	}

	return min;
}

void MyQueue::insert(int newElement, int position)
{
	node* tmp = first;

	for (int i = 0; i < position; i++) {
		tmp = tmp->prev;
	}

	tmp->next->prev = new node;
	tmp->next->prev->next = tmp->next;
	tmp->next = tmp->next->prev;
	tmp->next->data = newElement;
	tmp->next->prev = tmp;


}

void MyQueue::del(int position)
{
	node* tmp = first;

	for (int i = 0; i < position; i++) {
		tmp = tmp->prev;
	}
	
	if(tmp->prev != nullptr)
	tmp->prev->next = tmp->next;

	if(tmp->next != nullptr)
	tmp->next->prev = tmp->prev;

}

void MyQueue::delAll(int val)
{
	node* tmp = first;
	int posCounter = 0;

	while (tmp != nullptr) {
		
		if (tmp->data == val) {
			del(posCounter);
		}
			

		posCounter++;
		tmp = tmp->prev;
	}
}

void MyQueue::delDuplicates()
{
	int number;
	node* tmp = first;
	node* tmp2;
	int posCounter = 0;

	while (tmp != nullptr)
	{
		tmp2 = first;
		number = tmp->data;
		while (tmp2 != nullptr)
		{
			if (tmp2->data == number) {
				del(posCounter);
			}
			tmp2 = tmp2->prev;
			posCounter++;
		}

	}



}

MyQueue::MyQueue()
{
	first = nullptr;
	last = nullptr;

}

void MyQueue::change()
{
	node* tmp = last;
	pop_back();
	push_back(first->data);
	pop_front();
	push_front(tmp->data);
}

int MyQueue::getNumElements()
{
	node* tmp = first;
	int elements = 0;
	while (tmp != nullptr)
	{
		elements++;
		tmp = tmp->prev;
	}

	return elements;
}

bool MyQueue::empty()
{
	if(first == nullptr)
		return true;
	return false;
}



bool MyQueue::operator==(const MyQueue & Q1)
{
	node*tmp1 = first;
	node*tmp2 = Q1.first;
	bool equal = false;

	while (tmp1 != nullptr) {

		if (tmp1->data == tmp2->data)
			equal = true;
		else
			equal = false;

		tmp1 = tmp1->prev;
		tmp2 = tmp2->prev;

	}

	return equal;
}

void MyQueue::operator<<(MyQueue Q1)
{
	node* tmp = first;

	while (tmp != nullptr) {

		std::cout << tmp->data << "\n";

		tmp = tmp->prev;
	}
}

MyQueue::~MyQueue()
{
}
