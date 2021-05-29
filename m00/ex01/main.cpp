#include "phonebook.hpp"
#include <string>

int main ()
{
	PhoneBook all;
	all.promt();
	
	std::cout << "New contact:" << std::endl << all.contacts.name << std::endl << all.contacts.last_name << std::endl
	<< all.contacts.nickname << std::endl
	<< all.contacts.login << std::endl
	<< all.contacts.postal_address << std::endl
	<< all.contacts.email_address << std::endl
	<< all.contacts.phone_number << std::endl
	<< all.contacts.birthday_date << std::endl
	<< all.contacts.favorite_meal << std::endl
	<< all.contacts.underwear_color << std::endl
	<< all.contacts.darkest_secret << std::endl;
}