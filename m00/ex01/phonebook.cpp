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
				if (count == 8)
					std::cout << "can't hold any more contacts!" << std::endl;
				else
				{
					addcontact(contacts[count]);
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
		for (int i = 0 ; i < 10 - value.length(); i++)
			std::cout << " ";
		std::cout << value;
	}
}

void PhoneBook::SearchHeader()
{
	std::cout	<< "_____________________________________________" << std::endl
				<< "|     index|first name| last name|  nickname|" << std::endl
				<< "_____________________________________________" << std::endl;
	for (int i = 0; i < count; i++)
	{
		std::cout << "|         "<< i + 1 << "|";
		PrintField(contacts[i].name);
		std::cout << "|";
		PrintField(contacts[i].last_name);
		std::cout << "|";
		PrintField(contacts[i].nickname);
		std::cout << "|" << std::endl;
	}
	std::cout	<< "_____________________________________________" << std::endl;
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
				"name:           " << contacts[contactNumber].name << std::endl
				<< "last name:      " << contacts[contactNumber].last_name << std::endl
				<< "nickname:       " << contacts[contactNumber].nickname << std::endl
				<< "login:          " << contacts[contactNumber].login << std::endl
				<< "postal address: " << contacts[contactNumber].postal_address << std::endl
				<< "email address:  " << contacts[contactNumber].email_address << std::endl
				<< "phone number:   " << contacts[contactNumber].phone_number << std::endl
				<< "birthday date:  " << contacts[contactNumber].birthday_date << std::endl
				<< "favorite meal:  " << contacts[contactNumber].favorite_meal << std::endl
				<< "underwear color:" << contacts[contactNumber].underwear_color << std::endl
				<< "darkest secret: " << contacts[contactNumber].darkest_secret << std::endl
				<< std::endl;
		}
}

void PhoneBook::addcontact(Contacts& contacts)
{
	std::string	input;
	bool		ok = false;

	while (!ok)
	{
		std::cout << "Enter name: ";
		if (!std::getline (std::cin, input))
			std::exit(0);
		if (input.length())
			{
				contacts.name = input;
				ok = true;
			}
		else
			std::cout << "This is ain't right!" << std::endl;
	}
	ok = false;
	while (!ok)
	{
		std::cout << "Enter last name: ";
		if (!std::getline (std::cin, input))
			std::exit(0);
		if (input.length())
		{
			contacts.last_name = input;
			ok = true;
		}
		else
			std::cout << "Just enter last name, dammit!" << std::endl;
	}
	ok = false;
	while (!ok)
	{
		std::cout << "Enter nickname: ";
		if (!std::getline (std::cin, input))
			std::exit(0);
		if (input.length())
		{
			contacts.nickname = input;
			ok = true;
		}
		else
			std::cout << "Stop it!" << std::endl;
	}
	std::cout << "Enter login: ";
	if (!std::getline (std::cin, input))
		std::exit(0);
	contacts.login = input;
	std::cout << "Enter postal address: ";
	if (!std::getline (std::cin, input))
		std::exit(0);
	contacts.postal_address = input;
	std::cout << "Enter email address: ";
	if (!std::getline (std::cin, input))
		std::exit(0);
	contacts.email_address = input;
	std::cout << "Enter phone number: ";
	if (!std::getline (std::cin, input))
		std::exit(0);
	contacts.phone_number = input;
	std::cout << "Enter birthday date: ";
	if (!std::getline (std::cin, input))
		std::exit(0);
	contacts.birthday_date = input;
	std::cout << "Enter favorite meal: ";
	if (!std::getline (std::cin, input))
		std::exit(0);
	contacts.favorite_meal = input;
	std::cout << "Enter underwear color: ";
	if (!std::getline (std::cin, input))
		std::exit(0);
	contacts.underwear_color = input;
	std::cout << "Enter darkest secret: ";
	if (!std::getline (std::cin, input))
		std::exit(0);
	contacts.darkest_secret = input;
	std::cout << "\nthank you!\n" << std::endl;
}

PhoneBook::PhoneBook( void )
{
	count = 0;
	return ;
};