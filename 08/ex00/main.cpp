#include "easyfind.hpp"
#include <iostream>
#include <string>
#include <array>
#include <vector>

int main() {
	//------------------------------
	try	{
		std::cout << std::endl << "TEST 1" << std::endl;
		std::array<int, 5> arr = {1, 2, 3, 4, 5};
		std::cout << *easyfind(arr, 1) << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	//------------------------------
	try	{
		std::cout << std::endl << "TEST 2" << std::endl;
		std::vector<int> arr;
		arr.push_back(1);
		arr.push_back(2);
		arr.push_back(3);
		arr.push_back(4);
		arr.push_back(5);
		std::cout << *easyfind(arr, 5) << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	//------------------------------
	try	{
		std::cout << std::endl << "TEST 3" << std::endl;
		std::array<int, 5> arr2 = {1, 2, 3, 4, 5};
		std::cout << *easyfind(arr2, 5) << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
//------------------------------
	try	{
		std::cout << std::endl << "TEST 4" << std::endl;
		std::vector<int> arr3;
		std::cout << *easyfind(arr3, 0) << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}