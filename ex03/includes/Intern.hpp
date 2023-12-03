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
		        Intern(const Intern &obj);
	    	    Intern &	operator=(const Intern &obj);
                ~Intern(void);
                //======	           Methods             ======
		        AForm * makeForm(std::string FormName, std::string TargetName);
};

#endif