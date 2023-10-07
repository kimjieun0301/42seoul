#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : name("default"), _signed(false), signGrade(1), execGrade(1)
{
}

Form::Form(const Form& obj) : name(obj.getName()), _signed(obj.getSigned()), signGrade(obj.getSignGrade()), execGrade(obj.getExecGrade())
{
}

Form& Form::operator=(const Form& obj)
{
	if(this != &obj)
	{
        const_cast<std::string &>(this->name) = obj.getName();
        const_cast<int &>(this->signGrade) = obj.getSignGrade();
        const_cast<int &>(this->execGrade) = obj.getExecGrade();
        this->_signed = obj._signed;
    }
    return (*this);
}

Form::~Form()
{
}

Form::Form(std::string name, int signGrade, int execGrade) : name(name), _signed(false), signGrade(signGrade), execGrade(execGrade)
{
	if (signGrade > 150 || execGrade > 150)
	{
		throw GradeTooLowException();
	}
	else if (signGrade < 1 || execGrade < 1)
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

int Form::getExecGrade() const
{
	return (this->execGrade);
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
		<< ", execGrade : " << f.getExecGrade();
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