/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 09:51:29 by lciullo           #+#    #+#             */
/*   Updated: 2023/10/31 10:33:36 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
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

#endif 