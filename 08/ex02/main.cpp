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
	MutantStack<char> mstack3(mstack);
	std::cout << mstack2.size() << std::endl;
	std::cout << mstack3.size() << std::endl;
	MutantStack<char>::iterator it = mstack.begin();
	MutantStack<char>::iterator ite = mstack.end();
	MutantStack<char>::iterator it2 = mstack2.begin();
	MutantStack<char>::iterator ite2 = mstack2.end();
	MutantStack<char>::iterator it3 = mstack3.begin();
	MutantStack<char>::iterator ite3 = mstack3.end();
	++it;
	--it;
	while (it != ite || it2 != ite2 || it3 != ite3)
	{
		std::cout << *it << " " << *it2 << " " << *it3 << std::endl;
		++it;
		++it2;
		++it3;
	}
	std::stack<char> s(mstack);
	return 0;
}