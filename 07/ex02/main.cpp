#include "Array.hpp"
#include <iostream>

#define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;
//     return 0;
// }
int main()
{
	Array<int> test;
	try {
		test[0] = 1;
	}
	catch (std::exception &e){

		std::cout << "array with 0" << std::endl;
		std::cout << e.what() << std::endl;
	}
	//-----------Int Array
	Array<int> int_array(5);
	int_array[0] = 1;
	int_array[1] = 2;
	int_array[2] = 3;
	int_array[3] = 4;
	int_array[4] = 5;
	try {
		int_array[5] = 6;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	Array<int> test1(10);
	test1 = int_array;
	std::cout << test1[2] << std::endl;

	try {
		std::cout << int_array[5] << std::endl;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	for (size_t i = 0; i < int_array.size(); i++) {
		std::cout << int_array[i] << std::endl;
	}
//------------------String array
	Array<std::string> str(2);
	str[0] = "Boe!";
	str[1] = "Whoof";
	for (size_t i = 0; i < str.size(); i++) {
		std::cout << str[i] << std::endl;
	}
	try {
		std::cout << str[2] << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}