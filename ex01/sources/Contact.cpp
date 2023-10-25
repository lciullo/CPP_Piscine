/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:23:52 by lciullo           #+#    #+#             */
/*   Updated: 2023/10/25 14:41:11 by lciullo          ###   ########.fr       */
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
	std::cout << "Firstname : " ;
	std::cin >> FirstName;
	std::cout << "Lastname : " ;
	std::cin >> LastName;
	std::cout << "NickName : " ;
	std::cin >> NickName;
	std::cout << "DarkestSecret : " ;
	std::cin >> DarkestSecret;
	std::cout << "PhoneNumber :" ;
	std::cin >> PhoneNumber;
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