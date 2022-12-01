#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#pragma once

#include <iostream>
#include <string>

class Animal
{
public:
	Animal();
	~Animal();
protected:
	std::string type;
};

#endif