#include <iostream>

class a
{
public:
	void print()
	{
		std::cout << "a" << std::endl;
	}
};

class b : public a
{
};

int main()
{
	b b;
	b.print();
}

