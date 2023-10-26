#pragma once
#include "PhoneBook.hpp"
class Contact
{
	private:
		std::string _FirstName;
		std::string _LastName;
		std::string _NickName;
		std::string _DarkestSecret;
		std::string _PhoneNumber;
	public:
		Contact(void);
		~Contact(void);
		Contact SetContact(void);
		std::string GetFirstName(void);
		std::string GetLastName(void);
		std::string GetNickName(void);
		std::string GetDarkestSecret(void);
		std::string GetPhoneNumber(void);
		std::string	ParseContact(std::string input, int (*function)(int));
};
