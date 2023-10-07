#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
class Bureaucrat;

class Form 
{
    private:
        const std::string name;
        bool _signed;
        const int signGrade;
        const int execGrade;
        
    public:
        Form();
        Form(const Form& obj);
        Form& operator=(const Form& obj);
        ~Form();
        Form(std::string name, int signGrade, int execGrade);
        const std::string& getName() const;
        bool getSigned() const;
        int getSignGrade() const;
        int getExecGrade() const;
        void beSigned(const Bureaucrat& b);
        class GradeTooHighException : public std::exception
        {
            public:
                const char * what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                const char * what() const throw();
        };
};

std::ostream& operator<<(std::ostream& out, const Form& f);

#endif