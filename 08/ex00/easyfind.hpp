#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <exception>
#include <iostream>
// #include <vector>
// #include <list>
// #include <map>

class NotFoundException : public std::exception {
	public:
		virtual const char* what() const throw(){
			return "Value not found.";
		};
};

template <typename T>
typename T::iterator easyfind(T &container, int n) {
	typename T::iterator it = std::find(container.begin(), container.end(), n);
	if (it != std::end(container))
        std::cout << "Found value." << '\n';
	else
        throw NotFoundException();//std::cout << "does not contain " << n << '\n';
	return it;
}

#endif