
#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
	public	:
				Form(void);
				/*Form(const Form &other);
				Form(std::string Name, int Grade);
				Form &operator=(const Form &other);*/
				~Form(void);
				/*std::string	GetName(void) const;
				int GetGrade(void) const;
				void IncreaseGrade(void);
				void DecreaseGrade(void);
				class GradeTooHighException : public std::exception
				{
					public : virtual const char* what() const throw();

				};
				class GradeTooLowException : public std::exception
				{
					public : virtual const char* what() const throw();
				};*/
	private : 
				std::string const	_Name;
                bool                _Signed;
				const int			_Grade;

};


#endif 