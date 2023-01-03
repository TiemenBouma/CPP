#ifndef INTER_HPP
#define INTER_HPP
#pragma once
#include <iostream>
#include <string>

template <typename T> 
void iter(T *arr, size_t len, void (*func)(T))
{
	for (size_t i = 0; i < len; i++) {
		func(arr[i]);
	}
}

template <class T> 
void print(T value)
{
	std::cout << value << std::endl;
}
#endif
