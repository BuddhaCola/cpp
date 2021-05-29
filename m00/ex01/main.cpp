#include "phonebook.hpp"
#include <string>

int main ()
{
	PhoneBook all;
	all.promt();

	int i = 0;
	while (i < 0)
	{
		std::cout << "New contact:" << "#" << i << std::endl << all.contacts[0].name << std::endl << all.contacts[0].last_name << std::endl
	<< all.contacts[0].nickname << std::endl
	<< all.contacts[0].login << std::endl
	<< all.contacts[0].postal_address << std::endl
	<< all.contacts[0].email_address << std::endl
	<< all.contacts[0].phone_number << std::endl
	<< all.contacts[0].birthday_date << std::endl
	<< all.contacts[0].favorite_meal << std::endl
	<< all.contacts[0].underwear_color << std::endl
	<< all.contacts[0].darkest_secret << std::endl;
	i++;
	}
}