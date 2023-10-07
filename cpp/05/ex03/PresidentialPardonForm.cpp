#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm()
	: AForm("PresidentialPardonForm", 25, 5)
{
	this->target = "default";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj)
	: AForm(obj.getName(), obj.getSignGrade(), obj.getExecuteGrade())
{
	this->target = obj.target;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &obj)
{
	if (this != &obj)
	{
		setName(obj.getName());
		setSigned(obj.getSigned());
		setSignGrade(obj.getSignGrade());
		setExecuteGrade(obj.getExecuteGrade());
		this->target = obj.target;
	}
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
	: AForm("PresidentialPardonForm", 25, 5)
{
	this->target = target;
}

void	PresidentialPardonForm::execute(const Bureaucrat& b) const
{
	std::cout << b.getName() << " executed " << getName() << std::endl;
	std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}