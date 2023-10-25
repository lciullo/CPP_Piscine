#ifndef CONTACT_H
#define CONTACT_H

#pragma once

#include <iostream>

class Contact
{
	private:
		std::string FirstName;
		std::string LastName;
		std::string NickName;
		std::string DarkestSecret;
		std::string PhoneNumber;
	public:
		Contact(void);
		~Contact(void);
};

#endif