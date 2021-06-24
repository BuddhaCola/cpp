#include "Converter.hpp"

void Converter::singlechar() {
	_double_val = static_cast<int>(_str[0]);
	_ch_str << '\'' << _str[0] << '\'';
}

void Converter::interpret () {
	if (_str.length() == 1 && !std::isdigit(_str[0]))
		Converter::singlechar();
	else {
		try {
			_double_val = std::stod(_str);
		}
		catch (std::exception) {
			_double_str << "impossible";
		}
		if (static_cast<char>(_double_val) >= 32 && static_cast<char>(_double_val) <= 126)
			_ch_str << '\'' << static_cast<char>(_double_val) << '\'';
		else
			{
				if (static_cast<char>(_double_val) < 0 || static_cast<char>(_double_val) > 127)
					_ch_str << "impossible";
				else
					_ch_str << "Non displayable";
			}
	}
	if (static_cast<int>(_double_val) >= INT32_MAX ||static_cast<int>(_double_val) <= INT32_MIN)
		_int_str << "impossible";
	else
		_int_str << static_cast<int>(_double_val);
	_float_str << static_cast<float>(_double_val) << 'f';
	_double_str << _double_val;
	std::cout << _ch_str.str() << std::endl << _int_str.str() << std::endl << _float_str.str() << std::endl << _double_str.str() << std::endl;
}

Converter::Converter(std::string &input) : _str(input) {
	bool invalid = false;

	for (size_t i = 0; i < _str.length(); i++)
	{
		if (!std::isprint(_str[i]))
			invalid = true;
	}
	if (!_str[0])
		invalid = true;
	if (invalid)
	{
		std::cout << "non displayable characters can’t be passed as a parameter" << std::endl;
		throw(std::exception()) ;
	}
	_ch_str << "char: ";
	_int_str << "int: ";
	_float_str << "float: ";
	_double_str << "double: ";
}

Converter::Converter() {}

Converter::Converter(Converter const &orig) {
	_str = orig._str;
}

Converter &Converter::operator = (Converter &orig) {
	_str = orig._str;
	return(*this);
}

Converter::~Converter(){
}