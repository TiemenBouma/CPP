#ifndef EXEPTIONS_HPP
#define EXEPTIONS_HPP

#pragma once

class NoSpanExeptions : public std::exception
{
public:
	virtual const char* what() const throw() {
		return "No span possible.";
	}

private:

};

class NoSpaceExeptions : public std::exception
{
public:
	virtual const char* what() const throw() {
		return "No space left.";
	}

private:

};

#endif