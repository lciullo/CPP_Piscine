/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisa <lisa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 15:35:26 by lciullo           #+#    #+#             */
/*   Updated: 2023/12/03 19:30:40 by lisa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <fstream>
#include <string>
class ShrubberyCreationForm: public AForm {

	public	:
				//======    Constructors / Destructors    ======
				ShrubberyCreationForm(void);
				ShrubberyCreationForm(const ShrubberyCreationForm &other);
				ShrubberyCreationForm(std::string Target);
				ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);
				~ShrubberyCreationForm(void);
                //======            Getter                  ======
				std::string	GetTarget(void) const;
				//=====	            Exceptions             ====== 
				class FileNotOpenException : public std::exception
				{
					public : virtual const char *what() const throw();

				};
                //======            Methods                ======
				void execute(const Bureaucrat& executor) const;
	private : 
				std::string _Target;

};

#endif