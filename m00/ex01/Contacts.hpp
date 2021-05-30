#ifndef CONTACTS_HPP
#define CONTACTS_HPP

// #include "PhoneBook.hpp"

#include <iostream>
class Contacts
{
	private:
		std::string name;
		std::string last_name;
		std::string nickname;
		std::string login;
		std::string postal_address;
		std::string email_address;
		std::string phone_number;
		std::string birthday_date;
		std::string favorite_meal;
		std::string underwear_color;
		std::string darkest_secret;
		void		strupper(std::string& str);
		// void		fieldinput(std::string field);
	public:
		void		addcontact();
		std::string Get_name();
		std::string Get_last_name();
		std::string Get_nickname();
		std::string Get_login();
		std::string Get_postal_address();
		std::string Get_email_address();
		std::string Get_phone_number();
		std::string Get_birthday_date();
		std::string Get_favorite_meal();
		std::string Get_underwear_color();
		std::string Get_darkest_secret();
};
#endif