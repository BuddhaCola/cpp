#include "PhoneBook.hpp"

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
				if (count == 8)
					std::cout << "can't hold any more contacts!" << std::endl;
				else
				{
					contacts[count].addcontact();
					count++;
				}
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
		for (int i = 0 ; i < 10 - (int)value.length(); i++)
			std::cout << " ";
		std::cout << value;
	}
}

void PhoneBook::SearchHeader()
{
	std::cout	<< "┌──────────┬──────────┬──────────┬──────────┐" << std::endl
				<< "│     index│first name│ last name│  nickname│" << std::endl
				<< "├──────────┼──────────┼──────────┼──────────┤" << std::endl;
	for (int i = 0; i < count; i++)
	{
		std::cout << "│         "<< i + 1 << "│";
		PrintField(contacts[i].Get_name());
		std::cout << "│";
		PrintField(contacts[i].Get_last_name());
		std::cout << "│";
		PrintField(contacts[i].Get_nickname());
		std::cout << "│" << std::endl;
	}
	std::cout	<< "└──────────┴──────────┴──────────┴──────────┘" << std::endl;
}

void PhoneBook::search()
{
	int			contactNumber;
	std::string	input;

	if (count == 0)
	{
		std::cout << "Phonebook is empty! There's nothing! Nothing at all!\n" << std::endl;
		return ;
	}
	SearchHeader();
	std::cout << "Choose a contact you desire! " << std::endl;
	std::getline (std::cin, input);
	try
		{
			contactNumber = std::stoi(input) - 1;
		}
	catch (std::exception &err)
		{
			std::cout << "This number is not right" << std::endl;
		}
	if (contactNumber > 7 || contactNumber < 0 || contactNumber > count - 1)
		std::cout << "This was a mistake!" << std::endl;
	else
		{
			std::cout << contactNumber << std::endl;
			std::cout << 
				"name:           " << contacts[contactNumber].Get_name() << std::endl
				<< "last name:      " << contacts[contactNumber].Get_last_name() << std::endl
				<< "nickname:       " << contacts[contactNumber].Get_nickname() << std::endl
				<< "login:          " << contacts[contactNumber].Get_login() << std::endl
				<< "postal address: " << contacts[contactNumber].Get_postal_address() << std::endl
				<< "email address:  " << contacts[contactNumber].Get_email_address() << std::endl
				<< "phone number:   " << contacts[contactNumber].Get_phone_number() << std::endl
				<< "birthday date:  " << contacts[contactNumber].Get_birthday_date() << std::endl
				<< "favorite meal:  " << contacts[contactNumber].Get_favorite_meal() << std::endl
				<< "underwear color:" << contacts[contactNumber].Get_underwear_color() << std::endl
				<< "darkest secret: " << contacts[contactNumber].Get_darkest_secret() << std::endl
				<< std::endl;
		}
}

PhoneBook::PhoneBook( void )
{
	count = 0;
	return ;
};