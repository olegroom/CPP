#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

const char*Intern::FormNotFoundException::what() const throw() {
	return ("Form's name doesn't exist");
}

Intern::Intern()
{
}

Intern::Intern(Intern const &other)
{
	(void)other;
}

Intern &Intern::operator=(Intern const &oth2) {
	(void)oth2;
	return (*this);
}

Intern::~Intern()
{
}

Form *Intern::makeForm(std::string const &name, std::string const &target) {
	Form *res = nullptr;
	std::string classes[3] = {"shrubbery creation", "presidential pardon", "robotomy request"};
	Form *form_names[3] = {new ShrubberyCreationForm(target), new PresidentialPardonForm(target), new RobotomyRequestForm(target)};

	for (size_t i = 0; i < 3; i++)
		if (classes[i].compare(name) == 0)
		{
			res = form_names[i];
			std::cout << "Intern creates " << name << std::endl;
			return (res);
		}
	std::cout << "cann't create a form, try to input right form name" << std::endl;
	throw FormNotFoundException();
	return (res);

}