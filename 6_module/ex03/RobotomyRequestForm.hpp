#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "Form.hpp"

class RobotomyRequestForm : public Form {
private:
	std::string target;
	const std::string name;
	RobotomyRequestForm();
	
public:
	static const std::string &tree;
	RobotomyRequestForm(const std::string &);
	RobotomyRequestForm(RobotomyRequestForm const &);
	RobotomyRequestForm &operator=(RobotomyRequestForm const &);
	~RobotomyRequestForm();
	void execute(Bureaucrat const & executor) const;
};


#endif