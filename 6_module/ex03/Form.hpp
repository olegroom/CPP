#ifndef FORM_HPP
#define FORM_HPP
class Form;
#include "Bureaucrat.hpp"
#include <string>

class Form {
public:
	Form(std::string const &name, int const grade_to_sign, int const grade_to_exec);
	Form(const Form &);
	virtual ~Form();
	Form &operator=(const Form &);

	class GradeTooHighException: public std::exception {
		virtual const char* what() const throw();
	};

	class GradeTooLowException: public std::exception {
		virtual const char* what() const throw();
	};

	class DoesntSignedFormException: public std::exception {
		virtual const char* what() const throw();
	};

	int getGrade_to_sign() const;
	int	getGrade_to_exec() const;
	std::string const &getName() const;
	bool		getIsSigned() const;
	void		beSigned(Bureaucrat const &buro);
	virtual void execute(Bureaucrat const & executor) const = 0;

private:
	Form();
	const	std::string &name;
	bool		is_signed;
	const	int	grade_to_sign;
	const	int	grade_to_exec;
};

std::ostream &operator<<(std::ostream &os, Form const &f1);

#endif