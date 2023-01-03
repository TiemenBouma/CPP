#include "easyfind.hpp"
#include <iostream>
#include <string>
#include <array>
#include <vector>

int main() {
	try	{
		std::array<int, 5> arr = {1, 2, 3, 4, 5};
		for (size_t i = 0; i < arr.size() + 10; i++) {
			std::cout << i << " " << arr[i]<< "\n";
		}
		std::cout << *easyfind(arr, 3) << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	try	{
		std::cout << "--------TEST 1.2--------\n";
		std::vector<int> arr;
		arr.push_back(1);
		arr.push_back(2);
		arr.push_back(3);
		arr.push_back(4);
		arr.push_back(5);
		for (int i = 0; i < static_cast<int>(arr.size()); i++) {
			std::cout << "index " << i << " at " << arr[i]<< "\n";
		}
		std::cout << *easyfind(arr, 5) << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	try	{
		std::cout << "--------TEST 1.3--------\n";
		std::array<int, 5> arr = {1, 2, 3, 4, 5};
		for (int i = 0; i < static_cast<int>(arr.size()); i++) {
			std::cout << "index " << i << " at " << arr[i]<< "\n";
		}
		std::cout << easyfind(arr, 5) << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	try	{
		std::cout << "\n--------TEST 2--------\n";
		std::vector<int> arr;
		for (int i = 0; i < 5; i++) {
			arr.push_back(i + 1);
			std::cout << "index " << i << " at " << arr[i] << "\n";
		}
		std::cout << *easyfind(arr, 0) << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}