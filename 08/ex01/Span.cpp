#include "Span.hpp"
#include "Exeptions.hpp"
#include <time.h>


Span::Span(unsigned int N) {
	_array_length = N;
}

Span::~Span()
{

}

void Span::addNumber(int value) {
	if (_arr.size() >= _array_length){
		throw NoSpaceExeptions();//throw exeption
	}
	else {
		_arr.push_back(value);
	}
}

#include <iostream>
#include <random>
#include <vector>



void Span::addAllNumbers() {
	std::vector<int> v1(_array_length, 0);
	std::cout << "DEBUG" << std::endl;

	//int value = rand();
	if (_arr.size() >= _array_length){
		throw NoSpaceExeptions();//throw exeption
	}
	else {
		std::vector<int> v(_array_length);
    	std::mt19937 rng(time(0));
    	std::uniform_int_distribution<int> dist(0, 10000);
    	for (std::__1::vector<int>::iterator i = v.begin() ; i < v.end(); i++)
        	*i = dist(rng);
		_arr.insert(_arr.begin(), v.begin(), v.end());
	}
}


size_t	Span::shortestSpan() {
	int length = INT_MAX;
	if (_arr.size() < 2)
		throw NoSpanExeptions();
	else {
		std::vector<int> temp;
		temp = _arr;
		std::sort(temp.begin(), temp.end());
		for (size_t i = 0; i < temp.size() - 1; i++) {
			if (std::abs(temp[i] - temp[i + 1]) < length)
				length = std::abs(temp[i] - temp[i + 1]);
		}
		return length;
	}
	return -1;
}

size_t	Span::longestSpan() {
	int length = 0;
	if (_arr.size() < 2)
		throw NoSpanExeptions();
	else {
		std::vector<int> temp;
		int small = INT_MAX;
		int big = INT_MIN;
		temp = _arr;
		std::sort(temp.begin(), temp.end());
		for (size_t i = 0; i < temp.size(); i++) {
			if (temp[i] < small)
				small = temp[i];
			if (temp[i] > big)
				big = temp[i];
			length = big - small;
		}
		return length;
	}
	return -1;
}

void Span::print() {
	for (std::__1::vector<int>::iterator i = _arr.begin() ; i < _arr.end(); i++)
		std::cout << *i << std::endl;
}