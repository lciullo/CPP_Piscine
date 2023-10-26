/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisa <lisa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:06:47 by lciullo           #+#    #+#             */
/*   Updated: 2023/10/26 16:06:57 by lisa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

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
	this->_ContactArray[this->_NbContact] = contact.SetContact();
	this->_NbContact++;
	
}

void PhoneBook::DisplayAllPhoneBook(void)
{
	std::cout << std::setw(10) << "Index" << "|" << std::setw(10) << 
	"First name" << "|" << std::setw(10) << "Last name" << "|" << std::setw(10) 
	<< "_NickName" << "|";
	std::cout << std::endl;
	for (int i = 0; i <= 43; i++)
			std::cout << "-";
	std::cout << std::endl;
	for (int i = 0; i < 8; i++)
	{
		std::cout << std::setw(10) << (i + 1) << "|";
		std::cout << std::setw(10) << _ContactArray[i].GetFirstName() << "|";
		std::cout << std::setw(10) << _ContactArray[i].GetLastName() << "|";
		std::cout << std::setw(10) << _ContactArray[i].GetNickName() << "|";
		std::cout << std::endl; 
	}
}

void PhoneBook::DisplayContact(std::string index)
{
	std::cout << std::setw(10) <<  "First name : " << _ContactArray[(index[0] - 1) - 48].GetFirstName() << std::endl;
	std::cout << std::setw(10) << "Last name : " << _ContactArray[(index[0] - 1) - 48].GetLastName() << std::endl;
	std::cout << std::setw(10) << "Nick name : " << _ContactArray[(index[0] - 1) - 48].GetNickName() << std::endl;
	std::cout << std::setw(10) << "Phone number : " << _ContactArray[(index[0] - 1) - 48].GetPhoneNumber() << std::endl;
	std::cout << std::setw(10) << "Darkest secret : " << _ContactArray[(index[0] - 1) - 48].GetDarkestSecret() << std::endl;
	std::cout << std::endl; 	
}

void PhoneBook::SearchContact(void)
{
	std::string index;

	DisplayAllPhoneBook();
	while (1)
	{
		std::cout << "Enter the index contact : ";
		std::getline(std::cin, index);
		std::cout << std::endl;
		if (std::cin.eof())
			break ;
		if ((index[0] >= '1' && index[0] <= '7') && index.length() == 1)
		{
			if (_ContactArray[(index[0] - 1) - 48].GetFirstName().length() == 0)
				std::cout << "The contact choosen isn't register" << std::endl;
			else
				DisplayContact(index);	
		}
		else
			std::cout << "Index is a digit between 1 from 8" << std::endl;
	}
}
