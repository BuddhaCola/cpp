#include "Contacts.hpp"

void Contacts::addcontact()
{
	std::string	input;
	bool		ok = false;

	while (!ok)
	{
		std::cout << CYAN << "Enter name: " << RESET;
		if (!std::getline (std::cin, input))
			std::exit(0);
		if (input.length())
			{
				name = input;
				ok = true;
			}
		else
			std::cout << "This is ain't right!" << std::endl;
	}
	ok = false;
	while (!ok)
	{
		std::cout << CYAN << "Enter last name: " << RESET;
		if (!std::getline (std::cin, input))
			std::exit(0);
		if (input.length())
		{
			last_name = input;
			ok = true;
		}
		else
			std::cout << "Just enter last name, dammit!" << std::endl;
	}
	ok = false;
	while (!ok)
	{
		std::cout << CYAN << "Enter nickname: " << RESET;
		if (!std::getline (std::cin, input))
			std::exit(0);
		if (input.length())
		{
			nickname = input;
			ok = true;
		}
		else
			std::cout << "Stop it!" << std::endl;
	}
	std::cout << CYAN << "Enter login: " << RESET;
	if (!std::getline (std::cin, input))
		std::exit(0);
	login = input;
	std::cout << CYAN << "Enter postal address: " << RESET;
	if (!std::getline (std::cin, input))
		std::exit(0);
	postal_address = input;
	std::cout << CYAN << "Enter email address: " << RESET;
	if (!std::getline (std::cin, input))
		std::exit(0);
	email_address = input;
	std::cout << CYAN << "Enter phone number: " << RESET;
	if (!std::getline (std::cin, input))
		std::exit(0);
	phone_number = input;
	std::cout << CYAN << "Enter birthday date: " << RESET;
	if (!std::getline (std::cin, input))
		std::exit(0);
	birthday_date = input;
	std::cout << CYAN << "Enter favorite meal: " << RESET;
	if (!std::getline (std::cin, input))
		std::exit(0);
	favorite_meal = input;
	std::cout << CYAN << "Enter underwear color: " << RESET;
	if (!std::getline (std::cin, input))
		std::exit(0);
	underwear_color = input;
	std::cout << CYAN << "Enter darkest secret: " << RESET;
	if (!std::getline (std::cin, input))
		std::exit(0);
	darkest_secret = input;
	std::cout << "\nthank you!\n" << std::endl;
}

std::string Contacts::Get_name()
{
	return(name);
}
std::string Contacts::Get_last_name()
{
	return(last_name);
}
std::string Contacts::Get_nickname()
{
	return(nickname);
}
std::string Contacts::Get_login()
{
	return(login);
}
std::string Contacts::Get_postal_address()
{
	return(postal_address);
}
std::string Contacts::Get_email_address()
{
	return(email_address);
}
std::string Contacts::Get_phone_number()
{
	return(phone_number);
}
std::string Contacts::Get_birthday_date()
{
	return(birthday_date);
}
std::string Contacts::Get_favorite_meal()
{
	return(favorite_meal);
}
std::string Contacts::Get_underwear_color()
{
	return(underwear_color);
}
std::string Contacts::Get_darkest_secret()
{
	return(darkest_secret);
}