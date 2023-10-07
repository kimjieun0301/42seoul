#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : name("default"), _signed(false), signGrade(1), executGrade(1)
{
}

Form::Form(const Form& obj) : name(obj.getName()), _signed(obj.getSigned()), signGrade(obj.getSignGrade()), executGrade(obj.getexecutGrade())
{
}

Form& Form::operator=(const Form& obj)
{
	if(this != &obj)
	{
        const_cast<std::string &>(this->name) = obj.getName();
        const_cast<int &>(this->signGrade) = obj.getSignGrade();
        const_cast<int &>(this->executGrade) = obj.getexecutGrade();
        this->_signed = obj._signed;
    }
    return (*this);
}

Form::~Form()
{
}

Form::Form(std::string name, int signGrade, int executGrade) : name(name), _signed(false), signGrade(signGrade), executGrade(executGrade)
{
	if (signGrade > 150 || executGrade > 150)
	{
		throw GradeTooLowException();
	}
	else if (signGrade < 1 || executGrade < 1)
	{
		throw GradeTooHighException();
	}
}

const std::string& Form::getName() const
{
	return (this->name);
}

bool Form::getSigned() const
{
	return (this->_signed);
}

int Form::getSignGrade() const
{
	return (this->signGrade);
}

int Form::getexecutGrade() const
{
	return (this->executGrade);
}

void Form::beSigned(const Bureaucrat& b)
{
	if (this->signGrade >= b.getGrade())
	{
		_signed = true;
	}
	else
	{
		throw GradeTooLowException();
	}
}

std::ostream& operator<<(std::ostream& out, const Form& f)
{
	out << f.getName() 
		<< std::boolalpha <<", signed : " << f.getSigned()
		<< ", signGrade : " << f.getSignGrade()
		<< ", executGrade : " << f.getexecutGrade();
	return (out);
}

const char *Form::GradeTooHighException::what() const throw() 
{
	return "grade too high";
}

const char *Form::GradeTooLowException::what() const throw() 
{
	return "grade too low";
}