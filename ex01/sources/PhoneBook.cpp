/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:06:47 by lciullo           #+#    #+#             */
/*   Updated: 2023/10/31 11:58:00 by lciullo          ###   ########.fr       */
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
	std::string FirstName;
	std::string LastName;
	std::string NickName;
	std::cout << std::setw(10) << "Index" << "|" << std::setw(10) << 
	"First name" << "|" << std::setw(10) << "Last name" << "|" << std::setw(10) 
	<< "NickName" << "|";
	std::cout << std::endl;
	for (int i = 0; i <= 43; i++)
			std::cout << "-";
	std::cout << std::endl;
	for (int i = 0; i < 8; i++)
	{
		std::cout << std::setw(10) << (i + 1) << "|";
		FirstName = _ContactArray[i].GetFirstName();
		if (FirstName.length() >= 10)
			FirstName = (FirstName.substr(0, 9) + '.');
		LastName = _ContactArray[i].GetLastName();
		if (LastName.length() >= 10)
			LastName = (LastName.substr(0, 9) + '.');
		NickName = _ContactArray[i].GetNickName();
		if (NickName.length() >= 10)
			NickName = (NickName.substr(0, 9) + '.');
		std::cout << std::setw(10) << FirstName << "|";
		std::cout << std::setw(10) << LastName << "|";
		std::cout << std::setw(10) << NickName << "|";
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
			break ;
		}
		else
		{
			std::cout << "Index is a digit between 1 from 8" << std::endl;
			break ;
		}
	}
}
