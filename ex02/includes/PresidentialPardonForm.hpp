/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 15:35:20 by lciullo           #+#    #+#             */
/*   Updated: 2023/12/01 15:41:35 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm public : 
{
	public	:
				//======    Constructors / Destructors    ======
				PresidentialPardonForm(void);
				PresidentialPardonForm(const PresidentialPardonForm &other);
				PresidentialPardonForm(std::string Name, int Grade);
				PresidentialPardonForm &operator=(const PresidentialPardonForm &other);
				~PresidentialPardonForm(void);
	private : 
				std::string const	_Name;
				int					_Grade;

};

std::ostream &operator<<(std::ostream &out, const PresidentialPardonForm &Object);

#endif 