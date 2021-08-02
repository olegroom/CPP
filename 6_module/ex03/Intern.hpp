#ifndef INTERN_HPP
#define INTERN_HPP
class Intern;
#include "Form.hpp"

class Intern {
private:
	std::string target;
	
public:

	class FormNotFoundException : public std::exception {
		virtual const char* what() const throw();
	};

	Intern();
	Intern(Intern const &);
	Intern &operator=(Intern const &);
	~Intern();
	Form *makeForm(std::string const &, std::string const &);
};


#endif