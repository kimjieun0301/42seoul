#ifndef AFORM_HPP
#define AFORM_HPP

# include <iostream>
class Bureaucrat;

class AForm
{
	private:
		const std::string	name;
		bool				sign;
		const int			signGrade;
		const int			executeGrade;
	protected:
		void	setName(std::string name);
		void	setSigned(bool sign);
		void	setSignGrade(int signGrade);
		void	setExecuteGrade(int executeGrade);
	public:
		AForm();
		AForm(const AForm &obj);
		AForm& operator=(const AForm &obj);
		virtual ~AForm();
		AForm(std::string name, int signGrade, int executeGrade);

		const std::string&	getName() const;
		bool				getSigned() const;
		int			        getSignGrade() const;
		int			        getExecuteGrade() const;
		void			    beSigned(const Bureaucrat& b);
		
        virtual void	execute(Bureaucrat const & executor) const = 0;

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
		class NotSignedException : public std::exception
		{
			public:
				const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream &out, const AForm &f);

#endif