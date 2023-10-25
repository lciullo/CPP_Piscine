/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:06:47 by lciullo           #+#    #+#             */
/*   Updated: 2023/10/25 11:04:38 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	SetNbContact(0);
	SetOldestContact(0);
	return	;
}

PhoneBook::~PhoneBook(void)
{
	return	;
}

void PhoneBook::SetNbContact(int NewNbContact)
{
	this->NbContact = NewNbContact;
}

void PhoneBook::SetOldestContact(int NewContact)
{
	this->OldestContact = NewContact;
}