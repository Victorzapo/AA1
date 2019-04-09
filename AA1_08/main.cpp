#include <iostream>
#include "MyQueue.h"



int main() {

	MyQueue Q2;
	//Simula constructor
	Q2.first = Q2.last = new node;
	Q2.last->data = 5;

	Q2.Push_back(6);
	Q2.Push_back(20);
	Q2.Push_back(15);
	Q2.Push_back(6);
	Q2.Push_back(4);
	Q2.Push_back(18);



	MyQueue queue;

	//Simula constructor
	queue.first = queue.last = new node;
	queue.last->data = 5;
	
	//Prueba de funciones
	
	//1
	queue.Push_back(6);
	queue.Push_back(20);
	queue.Push_back(15);
	queue.Push_back(6);
	queue.Push_back(4); 
	queue.Push_back(18);

	
	//2
	queue.Pop_back();

	//3
	queue.Push_front(18);

	//4
	queue.Pop_front();

	//5
	std::cout << "First element: " << queue.Front() << "\n";

	//6
	std::cout << "Last element: " << queue.Back() << "\n";

	//7
	std::cout << "Element on position 3 is : " << queue.GetElementPos(3) << "\n";

	//8
	std::cout << "The biggest element is:  " << queue.MaxElement() << "\n";

	//9
	std::cout << "The smallest element is:  " << queue.MinElement() << "\n";

	//10
	queue.Insert(40, 3); //TMP

	//11
	queue.Delete(3);

	//12
	//queue.DeleteAll(6);

	//13
	//queue.DeleteDuplicates();

	//14
    queue.Change();

	//15
	std::cout << "There is " << queue.GetNumElements() << " Elements" << "\n";
	
	//16
	bool isEmpty = queue.Empty();
	
	//==

	bool same = queue == Q2;
	
	//<<

	queue << queue;

	return 0;
}