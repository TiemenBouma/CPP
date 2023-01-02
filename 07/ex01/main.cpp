#include "inter.hpp"
#include <string>


int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	std::string arr2[] = {"Hello", "World", "!"};
	char arr3[] = {'a', 'b', 'c', 'd', 'e'};
	iter(arr, 5, print);
	iter(arr2, 3, print);
	iter(arr3, 5, print);

	return 0;
}

