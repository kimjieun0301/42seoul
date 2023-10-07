#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm()
	: AForm("RobotomyRequestForm", 72, 45)
{
	this->target = "default";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj)
	: AForm(obj.getName(), obj.getSignGrade(), obj.getExecuteGrade())
{
	this->target = obj.target;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &obj)
{
	if (this != &obj)
	{
		setName(obj.getName());
		setSigned(obj.getSigned());
		setSignGrade(obj.getSignGrade());
		setExecuteGrade(obj.getExecuteGrade());
		this->target = obj.target;
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	: AForm("RobotomyRequestForm", 72, 45)
{
	this->target = target;
}

void	RobotomyRequestForm::execute(const Bureaucrat& b) const
{
	srand((unsigned int)time(NULL));
	std::cout << b.getName() << " executed " << getName() << std::endl;
	std::cout << "drrrrr ";
	if (rand() % 2)
		std::cout << target << " has been robotomized successfully." << std::endl;
	else
		std::cout << b.getName() << " the robotomy failed." << std::endl;
}