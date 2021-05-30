#include <iostream>

class Contacts
{
	public:
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
	private:
};

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
		void		addcontact(Contacts& contacts);
		void		strupper(std::string& str);
		void		fieldinput(std::string field);
		std::string PutField(std::string& input);
};