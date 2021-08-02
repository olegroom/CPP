#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
class ShrubberyCreationForm;
#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form {
private:
	std::string target;
	const std::string name;
	ShrubberyCreationForm();
	
public:
	static const std::string &tree;
	ShrubberyCreationForm(const std::string &);
	ShrubberyCreationForm(ShrubberyCreationForm const &);
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &);
	~ShrubberyCreationForm();

	class WorkingWithFileException: public std::exception {
		virtual const char *what() const throw();
	};
	void execute(Bureaucrat const & executor) const;

};

#endif
