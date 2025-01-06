#include "iter.hpp"
#include <iostream>


template <typename T>
void printElement(T& element)
{
    std::cout << element << std::endl;
}

int main(){
	int			intArray[] = {1, 2, 3, 4};
	double		dblArray[] = {4.4, 3.3, 2.2, 1.1};
	bool		bolArray[] = {true, false};
	char		chrArray[] = {'a', 'b', 'c', 'd', 'e'};
	std::string	strArray[] = {"string1", "string2", "string3"};

    iter(intArray, 4, printElement);
    iter(dblArray, 4, printElement);
    iter(bolArray, 2, printElement);
    iter(chrArray, 5, printElement);
    iter(strArray, 3, printElement);
}

