#include "Span.hpp"
#include "Exeptions.hpp"

int main()
{
	Span s(1000);

	try {
		s.addAllNumbers();
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	s.print();
	std::cout << std::endl;
	std::cout << s.shortestSpan() <<  std::endl;
	std::cout << s.longestSpan() <<  std::endl;


}