//#include "inter.hpp"
#include <string>
#include <iostream>

template <typename T> void iter(T *arr, size_t len, void (*func)(T))
{
	for (size_t i = 0; i < len; i++) {
		func(arr[i]);
	}
}

template <class T> void print(T value)
{
	std::cout << value << std::endl;
}

int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	std::string arr2[] = {"Hello", "World", "!"};
	iter(arr, 5, print);
	iter(arr2, 3, print);

	return 0;
}