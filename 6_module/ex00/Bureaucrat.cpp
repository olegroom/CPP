#include "Bureaucrat.hpp"

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Bureaucrat exception. Grade is too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Bureaucrat exception. Grade is too low");
}

Bureaucrat::Bureaucrat(const std::string &name, const int &grade) : name(name) {
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	this->grade = grade;
}

Bureaucrat::~Bureaucrat() {};

Bureaucrat::Bureaucrat(const Bureaucrat &obj2) { *this = obj2; }

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj2) {
	this->grade = obj2.grade;
	return (*this);
};

std::string const	&Bureaucrat::getName() const { return (this->name); }
int					Bureaucrat::getGrade() const { return (this->grade); }

void		Bureaucrat::gradeInc() {
	if (grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	grade--;
}

void		Bureaucrat::gradeDec() {
	if (grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	grade++;
}

std::ostream &operator<<(std::ostream &os, Bureaucrat const &b1) {
	os << b1.getName() << ", bureaucrat grade " << b1.getGrade() << std::endl;
	return (os);
}

