#include "vectorFunc.h"
#include <vector>


//1
std::vector<int> addVectors(std::vector<int> v1, std::vector<int> v2)
{
	std::vector<int> v3;

	for (int i = 0; i < v1.size(); i++)
       v3.push_back(v1[i] + v2[i]);

	return v3;
}

//2
std::vector<std::string> concatVectors(std::vector<std::string> v1, std::vector<std::string> v2)
{
	int counter = 0;
	std::vector<std::string> v3;

	for (int i = 0; i < v1.size(); i++)
		v3.push_back(v1[i]);
	
	for (int j = v1.size(); j < v1.size() + v2.size(); j++)
	{
		v3.push_back(v2[counter]);
		counter++;
	}



	return v3;
}

//3
void shiftRight(std::vector<int> &v1)
{
	
	v1.emplace(v1.begin(), rand() % 10);

}

//4
void rotateLeft(std::vector<int>& v1)
{



}




