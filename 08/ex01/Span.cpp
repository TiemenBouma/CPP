#include "Span.hpp"
#include "Exeptions.hpp"


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

size_t	Span::shortestSpan() {
	int length = INT_MAX;
	//int temp_length = 0;
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
	//int temp_length = 0;
	if (_arr.size() < 2)
		throw NoSpanExeptions();
	else {
		std::vector<int> temp;
		temp = _arr;
		std::sort(temp.begin(), temp.end());
		for (size_t i = 0; i < temp.size() - 1; i++) {
			if (std::abs(temp[i] - temp[i + 1]) > length)
				length = std::abs(temp[i] - temp[i + 1]);
		}
		return length;
	}

	return -1;
}