#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm()
	: name("default"), sign(false), signGrade(1), executeGrade(1)
{
}


AForm::AForm(const AForm &obj)
	: name(obj.name), sign(obj.sign), signGrade(obj.signGrade), executeGrade(obj.executeGrade)
{
}

AForm& AForm::operator=(const AForm &obj)
{
	if (this != &obj)
	{
		const_cast<std::string &>(this->name) = obj.getName();
		const_cast<int &>(this->signGrade) = obj.getSignGrade();
		const_cast<int &>(this->executeGrade) = obj.getExecuteGrade();
		this->sign = obj.sign;
	}
	return (*this);
}

AForm::~AForm()
{
}

AForm::AForm(std::string name, int signGrade, int executeGrade)
	: name(name), sign(false), signGrade(signGrade), executeGrade(executeGrade)
{
	if (signGrade > 150 || executeGrade > 150)
	{
		throw GradeTooHighException();
	}
	else if (signGrade < 1 || executeGrade < 1)
	{
		throw GradeTooLowException();
	}
}

const std::string&	AForm::getName() const
{
	return (this->name);
}

bool	AForm::getSigned() const
{
	return (this->sign);
}

int	AForm::getSignGrade() const
{
	return (this->signGrade);
}

int	AForm::getExecuteGrade() const
{
	return (this->executeGrade);
}

void	AForm::setName(std::string name)
{
	const_cast<std::string&>(this->name) = name;
}

void	AForm::setSigned(bool sign)
{
	this->sign = sign;
}

void	AForm::setSignGrade(int signGrade)
{
	const_cast<int&>(this->signGrade) = signGrade;
}

void	AForm::setExecuteGrade(int executeGrade)
{
	const_cast<int&>(this->executeGrade) = executeGrade;
}

void	AForm::beSigned(const Bureaucrat& b)
{
	std::cout << b.getName() << " signed " << name << std::endl;
	sign = true;
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return "grade too high";
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return "grade too low";
}

const char* AForm::NotSignedException::what() const throw()
{
	return "not signed";
}

std::ostream& operator<<(std::ostream &out, const AForm &f)
{
	out << std::boolalpha << f.getName() 
		<< ", sign " << f.getSigned()
		<< ", signGrade " << f.getSignGrade()
		<< ", executeGrade " << f.getExecuteGrade();
	return (out);
}