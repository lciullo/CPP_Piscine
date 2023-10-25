/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisa <lisa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:23:52 by lciullo           #+#    #+#             */
/*   Updated: 2023/10/25 20:44:15 by lisa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

Contact Contact::CreatContact(void)
{
	std::cout << "Firstname : ";
	std::getline(std::cin, FirstName);
	std::cout << "Lastname : ";
	std::getline(std::cin, LastName);
	std::cout << "NickName : ";
	std::getline(std::cin, NickName);
	std::cout << "DarkestSecret : ";
	std::getline(std::cin, DarkestSecret);
	std::cout << "PhoneNumber : "m;
	std::getline(std::cin, PhoneNumber);
	return (*this);
}

std::string Contact::GetFirstName(void)
{
	return (this->FirstName);
}

std::string Contact::GetLastName(void)
{
	return (this->LastName);
}

std::string Contact::GetNickName(void)
{
	return (this->NickName);
}

std::string Contact::GetDarkestSecret(void)
{
	return (this->NickName);
}

std::string Contact::GetPhoneNumber(void)
{
	return (this->PhoneNumber);
}