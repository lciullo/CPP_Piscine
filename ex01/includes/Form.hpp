/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 15:35:52 by lciullo           #+#    #+#             */
/*   Updated: 2023/12/05 10:30:16 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class Form
{
	public	:
				//======    Constructors / Destructors    ======
				Form(void);
                Form(std::string Name, const int GradeToSign, const int GradeToExec);
				Form(const Form &other);
				Form &operator=(const Form &other);
				~Form(void);
				//======            Getters                ======
			    std::string	GetName(void) const;
                int GetSigned(void) const;
				int GetGradeToSign(void) const;
                int GetGradeToExec(void) const;
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
				void beSigned(Bureaucrat &bureaucrat);
	private : 
				std::string const	_Name;
                bool                _Signed;
				const int			_GradeToSign;
                const int           _GradeToExec;

};

std::ostream &operator<<(std::ostream &out, const Form &Object);

#endif 