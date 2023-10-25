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
		Contact CreatContact(void);
		std::string GetFirstName(void);
		std::string GetLastName(void);
		std::string GetNickName(void);
		std::string GetDarkestSecret(void);
		std::string GetPhoneNumber(void);
};
