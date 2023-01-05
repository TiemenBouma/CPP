#include "MutantStack.hpp"
#include <iostream>
#include <stack>
#include <list>

int main()
{
	MutantStack<char> mstack;
	mstack.pop();
	try {
		std::cout << mstack.top() << std::endl;

	}
	catch (std::exception &e) {
		std::cout << "ERROR, no stack\n";
	}
	mstack.push('a');
	mstack.push('B');
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push('&');
	mstack.push('q');
	mstack.push('z');
	//[...]
	mstack.push('x');
	MutantStack<char> mstack2 = mstack;
	std::cout << mstack2.size() << std::endl;
	MutantStack<char>::iterator it = mstack.begin();
	MutantStack<char>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<char> s(mstack);
	return 0;
}