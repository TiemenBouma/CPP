#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <array>
#include <vector>
#include "Exeptions.hpp"


class Span
{
private:
	std::vector<int> _arr;
	size_t _array_length;

public:
    Span(unsigned int N);
    ~Span();

	void addNumber(int value);
	void addAllNumbers();
	size_t	shortestSpan();
	size_t	longestSpan();

	void print();



};

#endif