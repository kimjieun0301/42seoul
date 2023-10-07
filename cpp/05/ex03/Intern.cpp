#include "Intern.hpp"

Intern::Intern()
{

}

Intern::Intern(const Intern &obj)
{
	(void)obj;
}

Intern& Intern::operator=(const Intern &obj)
{
	(void)obj;
	return *this;
}

Intern::~Intern()
{
}

AForm*	Intern::makeForm(std::string name, std::string target)
{	
	AForm *form;
	std::string arr[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	int i;
	for (i = 0; i < 3; i++)
	{
		if (arr[i] == name)
			break;
	}
	switch (i)
	{
		case 0:
			form = new ShrubberyCreationForm(name, target);
			break;
		case 1:
			form = new RobotomyRequestForm(name, target);
			break;
		case 2:
			form = new PresidentialPardonForm(name, target);
			break;
		default:
			throw InvalidFormException();
	}
	std::cout << "Intern creates " << name << std::endl;
	return form;
}

const char* Intern::InvalidFormException::what() const throw()
{
	return "invalid form name.";
}