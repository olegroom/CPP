#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
class Bureaucrat;
#include "Form.hpp"
#include <string>
#include <iostream>

class Bureaucrat {
public:
	Bureaucrat(const std::string &name, const int &grade);
	virtual ~Bureaucrat();
	Bureaucrat(const Bureaucrat &);
	Bureaucrat &operator=(const Bureaucrat &);

	class GradeTooHighException : public std::exception {
		virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception {
		virtual const char* what() const throw();
	};

	class SignedAlreadyException: public std::exception {
		virtual const char* what() const throw();
	};

	std::string const	&getName() const;
	int					getGrade() const;
	void		gradeInc(const int &amount);
	void		gradeDec(const int &amount);
	void		signForm(Form &form) const;
	void		executeForm(Form const &form);

private:
	Bureaucrat();
	std::string	const	name;
	int					grade; //from 1 to 150
};

std::ostream &operator<<(std::ostream &os, Bureaucrat const &b1);

#endif