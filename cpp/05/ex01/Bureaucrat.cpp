#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat() : name("default")
{
	this->grade = 1;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
	: name(name)
{
	this->grade = grade;
	if (grade < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	else if (grade > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj) : name(obj.getName())
{
	this->grade = obj.getGrade();
	if (grade < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	else if (grade > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj) 
{
	if (this != &obj)
	{
		const_cast<std::string&>(this->name) = obj.getName();
		this->grade = obj.getGrade();
		if (grade < 1)
		{
			throw Bureaucrat::GradeTooHighException();
		}
		else if (grade > 150)
		{
			throw Bureaucrat::GradeTooLowException();
		}
	}
	return (*this);
}

Bureaucrat::~Bureaucrat() 
{
}

std::string Bureaucrat::getName() const
{
	return (this->name);
}

int Bureaucrat::getGrade() const
{
	return (this->grade);
}

void Bureaucrat::incrementGrade()
{
	int checker = this->grade - 1;

	if (checker < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	this->grade = checker;
}

void Bureaucrat::decrementGrade()
{
	int checker = this->grade + 1;

	if (checker > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
	this->grade = checker;
}

std::ostream& operator<<(std::ostream &out, const Bureaucrat &b)
{
	out << b.getName() << ", bureaucrat grade " << b.getGrade();
	return (out);
}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
	return "grade too high";
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	return "grade too low";
}

void Bureaucrat::signForm(Form& f) const
{
	try
	{
		f.beSigned(*this);
		std::cout << this->name << " signed " << f.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << this->name << " couldn't sign " << f.getName() << " because "<< e.what() << std::endl;
	}
}