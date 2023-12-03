/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisa <lisa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 15:35:26 by lciullo           #+#    #+#             */
/*   Updated: 2023/12/03 16:39:44 by lisa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"

class ShrubberyCreationForm: public AForm {

	public	:
				//======    Constructors / Destructors    ======
				ShrubberyCreationForm(void);
				ShrubberyCreationForm(const ShrubberyCreationForm &other);
				ShrubberyCreationForm(std::string Target);
				ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);
				~ShrubberyCreationForm(void);
	private : 
				std::string _Target;

};

#endif