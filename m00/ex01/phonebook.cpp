#include "phonebook.hpp"

void PhoneBook::strupper(std::string& str)
{
	for (int i = 0; str[i]; i++)
		str[i] = std::toupper(str[i]);
}

void PhoneBook::promt()
{
	std::string	input;

	std::cout << "Please enter one of these commands: ADD SEARCH EXIT" << std::endl;
	while (std::getline (std::cin, input))
	{
		strupper(input);
		if (input == "SEARCH")
			PhoneBook::search();
		else if (input == "ADD")
			{
				if (count > 8)
					std::cout << "can't hold any more contacts!" << std::endl;
				addcontact(contacts[count]);
				count++;
			}
		else if (input == "EXIT")
			return ;
		else
			std::cout << "You made a mistake!" << std::endl;
		std::cout << "Please enter one of these commands: ADD SEARCH EXIT" << std::endl;
	}
}

void PhoneBook::PrintField(std::string value)
{
	if (value.length() > 9)
	{
		std::cout << value.substr(0, 9) << ".";
		return ;
	}
	else
	{
		for (int i = 0 ; i < 10 - value.length(); i++)
			std::cout << " ";
		std::cout << value;
	}
}

void PhoneBook::SearchHeader()
{
	std::cout << "_____________________________________________" << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	std::cout << "_____________________________________________" << std::endl;
	for (int i = 0; i < count; i++)
	{
		std::cout << "|         "<< i << "|";
		PrintField(contacts[i].name);
		std::cout << "|";
		PrintField(contacts[i].last_name);
		std::cout << "|";
		PrintField(contacts[i].nickname);
		std::cout << "|" << std::endl;
	}
}

void PhoneBook::search()
{
	if (count == 0)
	{
		std::cout << "Phonebook is empty! There's nothing! Nothing at all!" << std::endl;
		return ;
	}
	SearchHeader();
	std::cout << "Choose contact!" << std::endl;
}

void PhoneBook::addcontact(Contacts& contacts)
{
	std::string	input;
	bool		ok = false;

	std::cout << "count = " << count << std::endl ;
	while (!ok)
	{
		std::cout << "Enter name: ";
		std::getline (std::cin, input);
		if (input.length())
			{
				contacts.name = input;
				ok = true;
			}
		else
			std::cout << "Stop it!" << std::endl;
	}
	ok = false;
	while (!ok)
	{
		std::cout << "Enter last name: ";
		std::getline (std::cin, input);
		if (input.length())
		{
			contacts.last_name = input;
			ok = true;
		}
		else
			std::cout << "Stop it!" << std::endl;
	}
	ok = false;
	while (!ok)
	{
		std::cout << "Enter nickname: ";
		std::getline (std::cin, input);
		if (input.length())
		{
			contacts.nickname = input;
			ok = true;
		}
		else
			std::cout << "Stop it!" << std::endl;
	}
	std::cout << "Enter login: ";
	std::getline (std::cin, input);
	contacts.login = input;
	std::cout << "Enter postal address: ";
	std::getline (std::cin, input);
	contacts.postal_address = input;
	std::cout << "Enter email address: ";
	std::getline (std::cin, input);
	contacts.email_address = input;
	std::cout << "Enter phone number: ";
	std::getline (std::cin, input);
	contacts.phone_number = input;
	std::cout << "Enter birthday date: ";
	std::getline (std::cin, input);
	contacts.birthday_date = input;
	std::cout << "Enter favorite meal: ";
	std::getline (std::cin, input);
	contacts.favorite_meal = input;
	std::cout << "Enter underwear color: ";
	std::getline (std::cin, input);
	contacts.underwear_color = input;
	std::cout << "Enter darkest secret: ";
	std::getline (std::cin, input);
	contacts.darkest_secret = input;
	std::cout << "thank you!" << std::endl;
}

PhoneBook::PhoneBook( void )
{
	count = 0;
	return ;
};