#include "phonebook.hpp"

void PhoneBook::strupper(std::string& str)
{
	for (int i = 0; str[i]; i++)
		str[i] = std::toupper(str[i]);
}

void PhoneBook::promt()
{
	int			count = 0;
	std::string	input;

	while (true)
	{
		std::cout << "👉 Please enter one of these commands: ADD SEARCH EXIT" << std::endl;
		std::getline (std::cin, input);
		strupper(input);
		if (input == "SEARCH")
			std::cout << "You entered " << input << "!" << std::endl << "Thank you!" << std::endl;
		else if (input == "ADD")
			{
				if (count > 8)
					std::cout << "☹️ can't hold any more contacts!" << std::endl;
				addcontact(contacts);
				count++;
			}
		else if (input == "EXIT")
			return ;
		else
			std::cout << "💩 You made a mistake!" << std::endl;
	}
}

void PhoneBook::addcontact(Contacts& contacts)
{
	std::string	input;

	std::cout << "Enter name: ";
	std::getline (std::cin, input);
	contacts.name = input;
	std::cout << "Enter last name: ";
	std::getline (std::cin, input);
	contacts.last_name = input;
	std::cout << "Enter nickname: ";
	std::getline (std::cin, input);
	contacts.nickname = input;
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