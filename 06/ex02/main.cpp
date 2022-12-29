#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <time.h>
#include <iostream>

Base * generate(void) {
	int i;
	srand(time(NULL));
	i = rand() % 3;
	switch (i)
	{
		case 0:
			return dynamic_cast<Base *>(new A);
		case 1:
			return dynamic_cast<Base *>(new B);
		case 2:
			return dynamic_cast<Base *>(new C);
	}
	return NULL;
}

void identify(Base* p) {
	A		*a;
	B		*b;
	C		*c;
	a = dynamic_cast<A *>(p);
	if (a) {
		std::cout << "p: A" << std::endl;
		return ;
	}
	b = dynamic_cast<B *>(p);
	if (b) {
		std::cout << "p: B" << std::endl;
		return ;
	}
	c = dynamic_cast<C *>(p);
	if (c) {
		std::cout << "p: C" << std::endl;
		return ;
	}
}

void identify(Base& p)
{
	try {
		A&	a = dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
		(void)a;
	}
	catch (std::bad_cast &bc) {}
	try {
		B&	b = dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
		(void)b;
	}
	catch (std::bad_cast &bc) {}
	try {
		C&	c = dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
		(void)c;
	}
	catch (std::bad_cast &bc) {}
}

int main() {
	Base * ptr = generate();
	Base & ref = *ptr;
	identify(ptr);
	identify(ref);
	delete ptr;
}