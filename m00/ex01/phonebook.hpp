#include "Contacts.hpp"

#include <iostream>

class PhoneBook
{
	public:
		Contacts	contacts[8];
		int			count;
		void		promt();
		void		search();
		void		SearchHeader();
		void		PrintField(std::string value);
		PhoneBook( void );
	private:
		void		strupper(std::string& str);
		void		fieldinput(std::string field);
		std::string PutField(std::string& input);
};