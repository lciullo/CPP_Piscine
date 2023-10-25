/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:06:47 by lciullo           #+#    #+#             */
/*   Updated: 2023/10/25 15:42:27 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook(void)
{
	this->SetNbContact(0);
	this->SetOldestContact(0);
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void PhoneBook::SetNbContact(int New_NbContact)
{
	this->_NbContact = New_NbContact;
}

void PhoneBook::SetOldestContact(int NewContact)
{
	this->_OldestContact = NewContact;
}

void PhoneBook::AddContact(void)
{
	Contact contact;
	if (this->_NbContact == 8)
		this->_NbContact = 0;
	this->_ContactArray[this->_NbContact] = contact.CreatContact();
	this->_NbContact++;
	
}

void PhoneBook::SearchContact(void)
{
	std::string index;
	std::cout << std::setw(10) << "index" << "|" << std::setw(10) << 
	"first name" << "|" << std::setw(10) << "last name" << "|" << std::setw(10) 
	<< "nickname" << "|";
	std::cout << std::endl;
	for (int i = 0; i <= 43; i++)
			std::cout << "-";
	std::cout << std::endl;
	for (int i = 0; i < 8; i++)
	{
		std::cout << std::setw(10) << i + 1 << "|";
		std::cout << std::setw(10) << _ContactArray[i].GetFirstName() << "|";
		std::cout << std::setw(10) << _ContactArray[i].GetLastName() << "|";
		std::cout << std::setw(10) << _ContactArray[i].GetNickName() << "|";
		std::cout << std::endl; 
	}
	std::cout << "index";
	std::getline(std::cin, index);
	if ((index[0] >= '0' && index[0] <= '7') && index.length() == 1)
	{
		std::cout << std::setw(10) << i + 1 << "|";
		std::cout << std::setw(10) << _ContactArray[i - 1 - 48].GetFirstName() << "|";
		std::cout << std::setw(10) << _ContactArray[i].GetLastName() << "|";
		std::cout << std::setw(10) << _ContactArray[i].GetNickName() << "|";
		std::cout << std::endl; 

	}
}