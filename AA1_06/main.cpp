#include "vectorFunc.h"
#include <iostream>
#include <vector>
#include <string>
#include <time.h>

struct Person
{
	std::string name;
	int bornData;
	std::string dni;



};


int main() {
	srand(time(NULL));

	//Definitions
	std::vector<int> v1(5);
	std::vector<int> v2(10, 0);
	std::vector<int> v3{ 10,9,8,7,6,5,4,3,2,1};
	std::vector<std::string> v4{ "Gertrudiz","Pancracia" ,"Anacleto","Hipolito","Eustaquio","Fulgencia" };
	std::vector<int> v5(v3);

	Person Jose;
	Jose.name = "Jose";
	Jose.bornData = 2121999;
	Jose.dni = "47987232D";
	Person Paquito;
	Jose.name = "Paquito";
	Jose.bornData = 1251996;
	Jose.dni = "47987232D";
	Person Victor;
	Jose.name = "Victor";
	Jose.bornData = 491999;
	Jose.dni = "47987232D";

	std::vector<Person>{Jose, Paquito, Victor};


	//Functions

	std::vector<int> vP1 = addVectors(v3, v3);
	std::vector<std::string> vP2 = concatVectors(v4, v4);
	
	shiftRight(v3);



	return 0;
}