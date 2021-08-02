#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

const char *ShrubberyCreationForm::WorkingWithFileException::what() const throw() {
	return ("ShrubberyCreationForm! File exception!!");
}

const std::string &ShrubberyCreationForm::tree = "      /\\\n" \
	"     /\\*\\\n" \
	"    /\\O\\*\\\n" \
	"   /*/\\/\\/\\\n" \
	"  /\\O\\/\\*\\/\\\n" \
	" /\\*\\/\\*\\/\\/\\\n" \
	"/\\O\\/\\/*/\\/O/\\\n" \
	"      ||\n" \
	"      ||\n" \
	"      ||\n";

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target):
	Form(target, 145, 137), target(target), name("shrubbery creation")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other):
	Form(other), target(other.target)
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &oth2) {
	this->target = oth2.target;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
	Form::execute(executor);
	std::ofstream file(this->target + "_shrubbery");
	if (file.is_open() == false)
		throw WorkingWithFileException();
	file << this->tree;
	if (file.bad())
		throw WorkingWithFileException();
	file.close();
}