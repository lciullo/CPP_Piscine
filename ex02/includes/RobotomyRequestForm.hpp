/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisa <lisa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 15:35:23 by lciullo           #+#    #+#             */
/*   Updated: 2023/12/03 20:10:17 by lisa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <cstdlib>
class RobotomyRequestForm: public AForm {

	public	:
				//======    Constructors / Destructors    ======
				RobotomyRequestForm(void);
				RobotomyRequestForm(const RobotomyRequestForm &other);
				RobotomyRequestForm(std::string Target);
				RobotomyRequestForm &operator=(const RobotomyRequestForm &other);
				~RobotomyRequestForm(void);
				//======            Getter                 ======
				std::string	GetTarget(void) const;
                //======            Methods                ======
				void execute(Bureaucrat const &Bureaucrat) const; 
	private : 
				std::string _Target;

};

#endif