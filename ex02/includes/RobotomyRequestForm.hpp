/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisa <lisa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 15:35:23 by lciullo           #+#    #+#             */
/*   Updated: 2023/12/04 19:19:22 by lisa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <cstdlib>

class RobotomyRequestForm: public AForm 
{

	public	:
				//======    Constructors / Destructors    ======
				RobotomyRequestForm(void);
				RobotomyRequestForm(const RobotomyRequestForm &other);
				RobotomyRequestForm(std::string Target);
				RobotomyRequestForm &operator=(const RobotomyRequestForm &other);
				~RobotomyRequestForm(void);
				//======            Getter                 ======
				std::string	GetTarget(void) const;
                //======            Method                ======
				void execute(Bureaucrat const &Bureaucrat) const; 
	private : 
				std::string _Target;

};

#endif