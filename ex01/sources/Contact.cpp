/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:23:52 by lciullo           #+#    #+#             */
/*   Updated: 2023/10/23 15:38:38 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	std::cout << "Constructor called" << std::endl;
	this->one = 42;
	std::cout << "this->one " << this->one << std::endl;
	return	;
}

Contact::~Contact(void)
{
	std::cout << "Destructor called" << std::endl;
	return	;
}