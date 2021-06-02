#include "Human.hpp"

std::string Human::identify()
{
	std::string ret = myBrain.identify();
	return (ret);
}

Brain &Human::getBrain()
{
	return (this->myBrain);
}