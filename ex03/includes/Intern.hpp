#ifndef INTERN_HPP
#define INTERN_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


class Intern
{
	public :    
                //======    Constructors / Destructors    ======
		        Intern(void);
		        Intern(const Intern &other);
	    	    Intern &	operator=(const Intern &obj);
                ~Intern(void);
				//======	            Exceptions         ======
				class InvalidNameFormException: public std::exception 
				{
					public :
								virtual const char	*what( void ) const throw();
				};
                //======	           Method             ======
		        AForm * makeForm(std::string FormName, std::string TargetName);
};

#endif