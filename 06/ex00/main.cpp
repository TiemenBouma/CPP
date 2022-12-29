#include "Scalar.hpp"
#include <iostream>

int main(int argc, char** argv)
{
	if (argc != 2) {
		std::cout << "Error input\n";
		return (0);
	}
	Scalar convert(static_cast<std::string>(argv[1]));
}