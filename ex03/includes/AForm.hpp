/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisa <lisa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 15:35:10 by lciullo           #+#    #+#             */
/*   Updated: 2023/12/03 23:35:23 by lisa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>
class Bureaucrat;

class AForm
{
	public	:
				//======    Constructors / Destructors    ======
				AForm(void);
				AForm(std::string Name, const int GradeToSign, const int GradeToExec);
				AForm(const AForm &other);
				AForm &operator=(const AForm &other);
				virtual ~AForm(void);
				//======            Getters                ======
				std::string	GetName(void) const;
				int GetSigned(void) const;
				int GetGradeToSign(void) const;
				int GetGradeToExec(void) const;
				//=====	            Exceptions             ====== 
				class GradeTooHighException : public std::exception
				{
					public : virtual const char *what() const throw();

				};
				class GradeTooLowException : public std::exception
				{
					public : virtual const char *what() const throw();
				};
				class NotSignedException : public std::exception 
				{
					public : virtual const char *what() const throw();
				};
				//=====	            Methods               ====== 
				void beSigned(Bureaucrat &bureaucrat);
				void beExecute(Bureaucrat const &Bureaucrat) const;
				virtual void execute(Bureaucrat const &Bureaucrat) const = 0;
	private : 
				const std::string 	_Name;
				bool                _Signed;
				const int			_GradeToSign;
				const int           _GradeToExec;

};

std::ostream &operator<<(std::ostream &out, const AForm &Object);

#endif 