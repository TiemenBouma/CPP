#include "Span.hpp"
#include "Exeptions.hpp"

int main()
{
	Span s(10);

	try {
		s.addNumber(4);
		s.addNumber(1);
		s.addNumber(9);
		s.addNumber(3);
		s.addNumber(2);
		s.addNumber(34);
		s.addNumber(32);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << s.shortestSpan() <<  std::endl;
	std::cout << s.longestSpan() <<  std::endl;


}