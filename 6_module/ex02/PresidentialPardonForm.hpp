#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "Form.hpp"

class PresidentialPardonForm : public Form {
private:
	std::string target;
	PresidentialPardonForm();
	
public:
	static const std::string &tree;
	PresidentialPardonForm(const std::string &);
	PresidentialPardonForm(PresidentialPardonForm const &);
	PresidentialPardonForm &operator=(PresidentialPardonForm const &);
	~PresidentialPardonForm();
	void execute(Bureaucrat const & executor) const;
};


#endif