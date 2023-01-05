#ifndef ARRAY_HPP
#define ARRAY_HPP

#pragma once
#include <iostream>
#include <exception>

template <typename T> 
class Array
{
	private:
		T *				_array;
		unsigned int	_size;
	public:
		Array() : _array(0), _size(0) {}
		
		Array(unsigned int size) {
			_size = size;
			_array = new T[size]();
		}

		Array(const Array &other) {
			if (other._size == 0) {
				_size = 0;
				_array = 0;
			}
			else {
				_size = other._size;
				_array = new T[_size]();
				for (size_t i = 0; i < _size; i++) {
					_array[i] = other._array[i];
				}
			}
		}

		Array operator=(Array &other) {
			if (_size > 0)
				delete[] _array;
			if (other._size == 0) {
				_size = 0;
				_array = 0;
			}
			else {
				_size = other._size;
				_array = new T[_size]();
				for (size_t i = 0; i < _size; i++) {
					_array[i] = other._array[i];
				}
			}
			return *this;
		}

		~Array() {
			if (_size > 0)
				delete[] _array;
		}

		class OutOfBoundException : public std::exception {
			public:
				virtual const char* what() const throw(){
					return "Index is out of bound.";
				};
		};
		
		T &operator[](size_t i) {
			if (i >= (this->size())) {
				throw OutOfBoundException();
			}
			return _array[i];
		}

		unsigned int size() {
			return (_size);
		}

};

#endif