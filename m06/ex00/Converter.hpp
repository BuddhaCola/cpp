#ifndef CONVERTER_HPP
# define CONVERTER_HPP

#include <iostream>
#include <sstream>
#include<iomanip>

class Converter {
	public:
		void	interpret ();
		void	singlechar();

		Converter(std::string &);
		Converter(Converter const &);
		Converter &operator = (Converter &);
		~Converter();
	protected:
		std::string	_str;
	private:
		double		_double_val;

		std::stringstream _ch_str;
		std::stringstream _int_str;
		std::stringstream _float_str;
		std::stringstream _double_str;

		void	print_result();
		
		Converter();
};

#endif // !CONVERTER_HPP