#include "Span.hpp"
#include <iostream>

int main () {
	size_t	arrSize = 20;
	Span	*span = NULL;

	try {
		span = new Span(arrSize);
	}
	catch (std::exception &so) {
		std::cout << so.what() << std::endl;
		return 0;
	}
	std::srand(time(NULL));
	for (size_t i = 0; i < arrSize; i++)
	{
		try {
			span->addNumber(std::rand() % 10000);
		}
		catch (std::exception &so) {
			std::cout << so.what() << std::endl;
		}
	}
	span->printsorted();
	std::cout << "longestSpan: " << span->longestSpan() << std::endl;
	std::cout << "shortestSpan: " << span->shortestSpan() << std::endl;
	delete span;
	return (0);
}