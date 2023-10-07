#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try
	{
		Bureaucrat b("b", 1);
		// Bureaucrat b("b", 140);

		ShrubberyCreationForm s("home"); // sign: 145, exec: 137
		b.signForm(s);
		b.executeForm(s);

		RobotomyRequestForm r("testRobot"); // sign: 72, exec: 45
		b.signForm(r);
		b.executeForm(r);

		PresidentialPardonForm p("testUser"); // sign: 25, exec: 5
		b.signForm(p);
		b.executeForm(p);
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}