/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisa <lisa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:23:52 by lciullo           #+#    #+#             */
/*   Updated: 2023/10/26 15:34:25 by lisa             ###   ########.fr       */
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

Contact Contact::SetContact(void)
{
	std::string input;

	std::cout << "First name : ";
	_FirstName = ParseContact("First name", &isalpha);
	std::cout << "Last name : ";
	_LastName = ParseContact("Last name", &isalpha);
	std::cout << "Nick name : ";
	_NickName = ParseContact("Nick name", &isalpha);
	std::cout << "Phone number : ";
	_PhoneNumber = ParseContact("Phone number", &isdigit);
	std::cout << "Darkest secret : ";
	_DarkestSecret = ParseContact("Darkest secret", &isprint);
	return (*this);
}

std::string	Contact::ParseContact(std::string input, int (*function)(int))
{
	std::string	res;
	int i = 0;

	while (1)
	{
		std::getline(std::cin, res);
		if ( std::cin.eof())
			break ;
		for(i = 0; (function(res[i]) != 0 || res[i] == '-'); i++)
				;
		if (res[i] == '\0' && res.length() != 0)
			break ;
		else if (res.length() == 0)
			std::cout << "Error : not empty input" << std::endl;
		else if (input == "First name")
		{
			std::cout << "Error : only alpha characters" << std::endl;
			std::cout << "First name : ";
		}
		else if (input == "Last name")
		{
			std::cout << "Error : only alpha characters" << std::endl;
			std::cout << "Last name : ";
		}
		else if (input == "Phone number")
		{	
			std::cout << "Error : only digit characters" << std::endl;
			std::cout << "Phone number : ";
		}
		else if (input == "Darkest secret")
		{	
			std::cout << "Error : only printable characters" << std::endl;
			std::cout << "Darkest secret : ";
		}
	}
	return (res);
}

std::string Contact::GetFirstName(void)
{
	return (this->_FirstName);
}

std::string Contact::GetLastName(void)
{
	return (this->_LastName);
}

std::string Contact::GetNickName(void)
{
	return (this->_NickName);
}

std::string Contact::GetDarkestSecret(void)
{
	return (this->_DarkestSecret);
}

std::string Contact::GetPhoneNumber(void)
{
	return (this->_PhoneNumber);
}