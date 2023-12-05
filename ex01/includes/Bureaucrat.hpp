/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:17:45 by lciullo           #+#    #+#             */
/*   Updated: 2023/12/05 10:24:47 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

# define RESET		"\033[0m"
# define BLACK		"\033[30m"
# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define YELLOW		"\033[33m"
# define BLUE		"\033[34m"
# define MAGENTA	"\033[35m"
# define CYAN		"\033[36m"
# define WHITE		"\033[37m"

#include "Form.hpp"

class Form;

class Bureaucrat
{
	public	:
				//======    Constructors / Destructors    ======
				Bureaucrat(void);
				Bureaucrat(const Bureaucrat &other);
				Bureaucrat(std::string Name, int Grade);
				Bureaucrat &operator=(const Bureaucrat &other);
				~Bureaucrat(void);
				//======            Getters                ======
				std::string	GetName(void) const;
				int GetGrade(void) const;
				//=====	            Exceptions             ====== 
				class GradeTooHighException : public std::exception
				{
					public : virtual const char* what() const throw();

				};
				class GradeTooLowException : public std::exception
				{
					public : virtual const char* what() const throw();
				};
				//=====	            Methods               ====== 
				void IncreaseGrade(void);
				void DecreaseGrade(void);
				void signForm(Form &form);
	private : 
				std::string const	_Name;
				int					_Grade;

};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &Object);

#endif 