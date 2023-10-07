#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat b("b", 1);
		std::cout << b << std::endl;
		b.decrementGrade();
		b.decrementGrade();
		b.decrementGrade();
		std::cout << b << std::endl;
		b.incrementGrade();
		std::cout << b << std::endl;

		Bureaucrat a("a", 1);
		std::cout << a << std::endl;
		//a.incrementGrade();

		Bureaucrat c("c", 150);
		std::cout << c << std::endl;
		//c.decrementGrade();

		//Bureaucrat d("d", 0);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}