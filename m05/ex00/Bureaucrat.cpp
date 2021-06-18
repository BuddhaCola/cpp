#include "Bureaucrat.hpp"

const std::string	Bureaucrat::getName() const {
	return _name;
}

int	Bureaucrat::getGrade() const {
	return _grade;
}

void				Bureaucrat::upgrade(){
	if (_grade - 1 != 0)
	_grade--;
}
void				Bureaucrat::downgrade(){
	if (_grade + 1 != 151)
	_grade++;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {}

Bureaucrat::Bureaucrat(const Bureaucrat &orig) : _name(orig.getName()), _grade(orig.getGrade()) {
}

Bureaucrat Bureaucrat::operator = (Bureaucrat &orig) {
	if (this == &orig)
		return *this;
	_grade = orig._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat(){}


std::ostream & operator << (std::ostream &out, Bureaucrat const & current ) {
	out << current.getName() << ", bureaucrat grade " << current.getGrade() <<".";
	return out;
}