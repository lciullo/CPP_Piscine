/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisa <lisa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 15:35:20 by lciullo           #+#    #+#             */
/*   Updated: 2023/12/04 19:19:26 by lisa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"

class PresidentialPardonForm: public AForm {

	public	:
				//======    Constructors / Destructors    ======
				PresidentialPardonForm(void);
				PresidentialPardonForm(const PresidentialPardonForm &other);
				PresidentialPardonForm(std::string Target);
				PresidentialPardonForm	operator=(const PresidentialPardonForm &obj);
				~PresidentialPardonForm(void);
				//======            Getter                 ======
				std::string	GetTarget(void) const;
                //======            Method                ====== 
				void execute(const Bureaucrat& executor) const;
	private : 
				std::string _Target;

};

#endif 