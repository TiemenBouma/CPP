#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>


template <typename T>
class MutantStack : public std::stack<T>
{
public:
	typedef T 	    			      				value_type;
	typedef value_type*			      				pointer;
	typedef const value_type*						const_pointer;
	typedef value_type&                  	 	    reference;
	typedef const value_type&             		    const_reference;
	typedef value_type*          		    	 	iterator;
	typedef const value_type*				      	const_iterator;

private:
	value_type *	_stack;
	size_t			_size;

public:
	MutantStack() : _stack(0), _size(0) {

	}
	
	MutantStack(const MutantStack &other) {
		if (other._size == 0) {
			_size = 0;
			_stack = 0;
		}
		else {
			_size = other._size;
			_stack = new value_type[_size]();
			for (size_t i = 0; i < _size; i++) {
				_stack[i] = other._stack[i];
			}
		}
	}

	MutantStack operator=(MutantStack &other) {
		if (_size > 0)
			delete[] _stack;
		if (other._size == 0) {
			_size = 0;
			_stack = 0;
		}
		else {
			_size = other._size;
			_stack = new value_type[_size]();
			for (size_t i = 0; i < _size; i++) {
				_stack[i] = other._stack[i];
			}
		}
		return *this;
	}

	~MutantStack() {
		if (_size > 0)
			delete[] _stack;
	}

	unsigned int size() const {
		return (_size);
	}

	reference top() const {
		if (_size == 0)
			throw std::exception();
		return _stack[_size - 1];
	}

	void pop() {
		if (_size == 0)
			return ;
		else {
			_size--;
			value_type *temp = new value_type[_size];
			for (size_t i = 0; i < _size; i++) {
				temp[i] = _stack[i];
			}
			delete [] _stack;
			_stack = temp;
		}
	}

	void push(value_type value) {
		value_type *temp = new value_type[_size + 1];
		for (size_t i = 0; i < _size; i++) {
			temp[i] = _stack[i];
		}
		temp[_size] = value;
		delete [] _stack;
		_stack = temp;
		_size++;
	}

	bool empty() {
		return (_size == 0) ? 1 : 0;
	}

	iterator begin() {
		return &_stack[0];
	}

	iterator end() {
		if (_size == 0)
			return &_stack[0];
		return &_stack[_size];
	}
};

#endif