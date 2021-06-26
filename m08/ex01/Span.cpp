#include "Span.hpp"
#include <exception>
#include <iostream>

class overflowException : public std::exception {
	const char *what() const throw() {
		return "array is full";
	}
};

class tooSmallException : public std::exception {
	const char *what() const throw() {
		return "gotta have more then 1 element";
	}
};


void	Span::printsorted() {
	std::sort(_stored.begin(), _stored.end());
	for (unsigned int i = 0; i < _stored.size(); i++)
	{
		std::cout << "|" << i << "|" << _stored[i] << std::endl;
	}
}


int		Span::shortestSpan() {
	std::sort(_stored.begin(), _stored.end());
	int shortestSpan = _stored[1] - _stored[0];
	for (size_t i = 1; i < _stored.size(); i++) {
		if (shortestSpan == 0)
				break;
		if (_stored[i] - _stored[i - 1] < shortestSpan) {
			shortestSpan = _stored[i] - _stored[i - 1];
		}
	}
	return shortestSpan;
}
int		Span::longestSpan() {
	std::sort(_stored.begin(), _stored.end());
	return (_stored[_stored.size() - 1] - _stored[0]);
}

void	Span::addNumber(int const &nu) {
	if (_stored.size() == _stored.capacity())
		throw overflowException();
	_stored.push_back(nu);
}

Span::Span (unsigned int size) {
	if (size < 2)
		throw(tooSmallException());
	_stored.reserve(size);
}

Span &Span::operator = (Span const &orig) {
	if (!this->_stored.empty())
		this->_stored.clear();
	this->_stored = std::vector<int>(orig._stored.size());
	for (size_t i = 0; i < _stored.size(); i++)
		this->_stored[i] = orig._stored[i];
	return (*this);
}

Span::Span(const Span &orig) {
	*this = orig;
}

Span::Span() {}

Span::~Span() {}

