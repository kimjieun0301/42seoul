#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>
class AForm;

class Bureaucrat 
{
    private:
        const std::string name;
        int grade;
    public:
        Bureaucrat();
        Bureaucrat(const Bureaucrat& obj);
        Bureaucrat& operator=(const Bureaucrat& obj);
        virtual ~Bureaucrat();
		Bureaucrat(std::string name, int grade);

		std::string	getName() const;
		int	getGrade() const;

		void	incrementGrade();
		void	decrementGrade();

		void signForm(AForm& f) const;
		void	executeForm(AForm const & form);
		class GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream &out, const Bureaucrat &b);

#endif