//#include "Data.hpp"
#include <stdint.h>
#include <iostream>
#include <string>

typedef struct Data
{
	std::string _data;
}	Data;

uintptr_t serialize(Data* ptr) {
	uintptr_t raw = reinterpret_cast<uintptr_t>(ptr);
	return raw;
}

Data* deserialize(uintptr_t raw)
{
	Data* ptr =  reinterpret_cast<Data*>(raw);
	return ptr;
}

int	main(void)
{
	Data		ptr;
	uintptr_t	raw;

	ptr._data = "test";
	std::cout << ptr._data << std::endl;
	raw = serialize(&ptr);
	std::cout << raw << std::endl;
	std::cout << ptr._data << std::endl;
	Data *ptr2 = deserialize(raw);
	std::cout << ptr2->_data << std::endl;
}