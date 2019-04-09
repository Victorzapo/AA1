#include <iostream>
#include "MyQueue.h"



int main() {

	MyQueue Q2;
	//Simula constructor
	Q2.first = Q2.last = new node;
	Q2.last->data = 5;

	Q2.push_back(6);
	Q2.push_back(20);
	Q2.push_back(15);
	Q2.push_back(6);
	Q2.push_back(4);
	Q2.push_back(18);



	MyQueue queue;

	//Simula constructor
	queue.first = queue.last = new node;
	queue.last->data = 5;
	

	//Prueba de funciones
	
	//1
	queue.push_back(6);
	queue.push_back(20);
	queue.push_back(15);
	queue.push_back(6);
	queue.push_back(4); 
	queue.push_back(18);

	
	//2
	queue.pop_back();

	//3
	queue.push_front(18);

	//4
	queue.pop_front();

	//5
	std::cout << "First element: " << queue.front() << "\n";

	//6
	std::cout << "Last element: " << queue.back() << "\n";

	//7
	std::cout << "Element on position 3 is : " << queue.getElementPos(3) << "\n";

	//8
	std::cout << "The biggest element is:  " << queue.maxElement() << "\n";

	//9
	std::cout << "The smallest element is:  " << queue.minElement() << "\n";

	//10
	queue.insert(40, 3); //TMP

	//11
	queue.del(3);

	//12
	//queue.delAll(6);

	//13
	//queue.delDuplicates();

	//14
    queue.change();

	//15
	std::cout << "There is " << queue.getNumElements() << " Elements" << "\n";
	
	//16
	bool isEmpty = queue.empty();
	
	//==

	bool same = queue == Q2;
	
	//<<

	queue << queue;

	return 0;
}