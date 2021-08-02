#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target):
	Form(target, 72, 45), target(target), name("robotomy request")
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other):
	Form(other), target(other.target)
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &oth2) {
	this->target = oth2.target;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	Form::execute(executor);
	if (rand() % 2 == 0)
		std::cout << "Form has been robotomized" << std::endl;
	else
		std::cout << "Unexpected failure happened robotomizing the form" << std::endl;
}