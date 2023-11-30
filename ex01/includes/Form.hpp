
#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class Form
{
	public	:
				Form(void);
                Form(std::string Name, int GradeToSign, int GradeToExec);
				Form(const Form &other);
				Form &operator=(const Form &other);
				~Form(void);
			    std::string	GetName(void) const;
                int GetSigned(void) const;
				int GetGradeToSign(void) const;
                int GetGradeToExec(void) const;
                void beSigned(Bureaucrat &bureaucrat);
				class GradeTooHighException : public std::exception
				{
					public : virtual const char* what() const throw();

				};
				class GradeTooLowException : public std::exception
				{
					public : virtual const char* what() const throw();
				};
	private : 
				std::string const	_Name;
                bool                _Signed;
				const int			_GradeToSign;
                const int           _GradeToExec;

};

std::ostream &operator<<(std::ostream &out, const Form &Object);

#endif 