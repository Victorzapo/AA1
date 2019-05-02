#include <iostream>
#include <deque>
#include <queue>
#include <stack>
#include <string>


struct person { std::string name; int age; };


std::deque<int> superMerge(std::deque<int> d1, std::deque<int> d2) {

	std::deque<int> d3;

	std::deque<int>::iterator it1 = d1.begin();
	std::deque<int>::iterator it2 = d2.begin();

	//Checks the bigger number and push it
	while (it1 != d1.end() && it2 != d2.end()) {

		if (*it1 > *it2){
			d3.push_back(*it1);
			it1++;
		}
		else {
			d3.push_back(*it2);
			it2++;
		}


	
	}

	//Push the rest of the longest list
	if (it1 == d1.end()) { 
		
		while (it2 != d2.end()) {
			d3.push_back(*it2);
			it2++;
		}
	}
	else {
		while (it1 != d1.end()) {
			d3.push_back(*it1);
			it1++;
		}
	}



	return d3;
}


void printReverse(std::deque<int> d1) {

	for (auto it = d1.rbegin(); it != d1.rend(); it++) 
		std::cout << *it << std::endl;
	
}


bool isBalanced(std::deque<char> d1) {

	int open = 0;
	
	std::deque<char>::iterator it = d1.begin();

	while (it != d1.end()) {

		if (*it == '(') {
			open++;
		}
		else if (*it == ')' && open > 0)
			open--;

		it++;
	}

	if (open == 0)
		return true;
	else
		return false;

}


std::queue<std::string> concat(std::queue<std::string> d1, std::queue<std::string> d2) {

	std::queue<std::string> d3(d1);

	int size1 = d1.size();
	int size2 = d2.size();

	for (int it1 = 0; it1 < size1 ; it1++) {
		d3.push(d1.front());
		d1.pop();
	}
	
	for (auto it2 = 0; it2 < size2; it2++) {
		d3.push(d2.front());
		d2.pop();
	}

	return d3;
}


std::ostream& operator << (std::ostream &o, const std::deque<int> &d1) {

	for (auto it = d1.begin(); it != d1.end(); it++)
		o << *it << std::endl;

	return o;

}

bool& operator ==  (std::deque<int> d1, std::deque<int> d2) {

	return (d1 == d2);

}



int main() {

	//Declarations

	std::deque<int> d1;

	d1.push_back(20);
	d1.push_back(10);
	d1.push_back(6);
	d1.push_back(2);


	std::deque<int> d2;


	d2.push_back(7);
	d2.push_back(5);
	d2.push_back(4);	
	d2.push_back(2);
	d2.push_back(0);


	std::deque<char> d3;


	d3.push_back('(');
	d3.push_back('(');
	d3.push_back('(');
	d3.push_back(')');



	std::queue<std::string> q1;
		q1.push("Hola");
		q1.push("Taluego");
		q1.push("Kease");

	std::queue<std::string> q2;
		q2.push("Ktevaya");
		q2.push("Dw");
		q2.push("Ie oe ueaue");
	
	//Function test

	std::deque<int> df = superMerge(d1, d2);

    printReverse(d2);

	bool bal = isBalanced(d3);

	std::queue<std::string> dfs = concat(q1, q2);

	//Overloads

	std::cout << "Overloads" << std::endl;

	std::cout << d1;

	std::stack<person> s1;

	//d1 == d2;
	
	


	return 0;
}		