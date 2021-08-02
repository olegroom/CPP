#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int		main(void) {
	try
	{
		// ShrubberyCreationForm f1("home");
		// RobotomyRequestForm f2("Mechanism");
		PresidentialPardonForm f3("PF");
		std::cout << f3;
		// Bureaucrat v1("Vasya", 130);
		// Bureaucrat o1("Oleg", 15);
		Bureaucrat n1("Nadya", 3);
		n1.signForm(f3);
		n1.executeForm(f3);
		std::cout << f3;
		// v1.signForm(f1);
		// f1.execute(v1);
		// o1.signForm(f2);
		// f2.execute(n1);
		// f3.beSigned(o1);
		// f3.execute(n1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}