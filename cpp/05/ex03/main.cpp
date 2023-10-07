#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	try
	{
		Bureaucrat b("b", 1);
		Intern i;
		
		AForm* rrf;
		rrf = i.makeForm("robotomy request", "Bender");
		// rrf = i.makeForm("presidential pardon", "Bender");
		// rrf = i.makeForm("shrubbery creation", "Bender");
		// rrf = i.makeForm("test request", "Bender");

		b.signForm(*rrf);
		std::cout << *rrf << std::endl;
		std::cout << std::endl;
		b.executeForm(*rrf);
		delete rrf;
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}