#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
class AForm;

class Intern
{
	public:
		Intern();
		Intern(const Intern &obj);
		Intern& operator=(const Intern &obj);
		~Intern();
		AForm*	makeForm(std::string name, std::string target);
		
		class InvalidFormException : public std::exception
		{
			public:
				const char* what() const throw();
		};
};

#endif