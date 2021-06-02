#include "Brain.hpp"
#include <sstream>

std::string Brain::identify()
{
	std::string 		address;
	std::stringstream	addressStream;
	
	addressStream << this;
	address = addressStream.str();
	return (address);
}