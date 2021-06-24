#include <iostream>
#include <cstdint>

typedef	struct	{
	std::string	value;
}				Data;

uintptr_t serialize(Data* ptr) {
	uintptr_t convert = reinterpret_cast<uintptr_t>(ptr);
	return convert;
}

Data* deserialize(uintptr_t raw) {
	Data *convert = reinterpret_cast<Data *>(raw);
	return (convert);
}

int main () {
	Data		foo;
	uintptr_t	holder;
	Data		*ptr;

	foo.value = "Hello!";

	holder = serialize(&foo);
	ptr = deserialize(holder);
	if (ptr == &foo)
		std::cout << &foo << " and " << ptr << " have same adresses. Int value: " << holder << std::endl;
	else
		std::cout << &foo << " and " << ptr << " are different adresses" << std::endl;
	std::cout << "\033[0m\033[35m" << ptr->value << std::endl;
	return (0);
}