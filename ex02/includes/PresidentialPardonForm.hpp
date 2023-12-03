/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisa <lisa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 15:35:20 by lciullo           #+#    #+#             */
/*   Updated: 2023/12/03 17:11:47 by lisa             ###   ########.fr       */
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
				PresidentialPardonForm &operator=(const PresidentialPardonForm &other);
				~PresidentialPardonForm(void);
				//======            Getter                 ======
				std::string	GetTarget(void) const;
                //======            Methods                ====== 
				
	private : 
				std::string _Target;

};

#endif 