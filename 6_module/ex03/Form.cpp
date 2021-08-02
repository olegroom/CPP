#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <string>

const char *Form::GradeTooHighException::what() const throw() {
	return ("Form exception. Grade is too high");
}

const char *Form::GradeTooLowException::what() const throw() {
	return ("Form exception. Grade is too low");
}

const char *Form::DoesntSignedFormException::what() const throw() {
	return ("Form exception. Trying to execute but form wasn't signed!");
}

Form::~Form() {}

Form::Form(const std::string &name, int const grade_to_sign, int const grade_to_exec) :
	name(name), grade_to_sign(grade_to_sign), grade_to_exec(grade_to_exec)
{
	if (grade_to_exec < 1 || grade_to_sign < 1)
		throw Form::GradeTooHighException();
	else if (grade_to_sign > 150 || grade_to_exec > 150)
		throw Form::GradeTooLowException();
	this->is_signed = false;
}

Form::Form(const Form &f2) :
	name(f2.name), grade_to_sign(f2.grade_to_sign), grade_to_exec(f2.grade_to_exec)
{
	if (grade_to_exec < 1 || grade_to_sign < 1)
		throw Form::GradeTooHighException();
	else if (grade_to_sign > 150 || grade_to_exec > 150)
		throw Form::GradeTooLowException();
	this->is_signed = false;
}

std::string	const &Form::getName() const { return (this->name); }
int			Form::getGrade_to_exec() const { return (this->grade_to_exec); }
int			Form::getGrade_to_sign() const { return (this->grade_to_sign); }
bool		Form::getIsSigned() const { return (this->is_signed); }

void		Form::beSigned(Bureaucrat const &b1) {
	if (b1.getGrade() <= this->getGrade_to_sign())
		this->is_signed = true;
	else
		throw Form::GradeTooLowException();
}

void Form::execute(Bureaucrat const &bureaucrat) const
{
	if (bureaucrat.getGrade() > this->grade_to_exec)
		throw Form::GradeTooLowException();
	if (is_signed == false)
		throw Form::DoesntSignedFormException();
}

std::ostream &operator<<(std::ostream &os, Form const &f1) {
	os << "Form #" << f1.getName() << std::endl << "Grade to exec: " << f1.getGrade_to_exec() << std::endl << "Grade to sign: " << f1.getGrade_to_sign() << std::endl << "Is signed? : " << f1.getIsSigned() << std::endl;
	return (os);
}