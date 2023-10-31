/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:07:46 by lciullo           #+#    #+#             */
/*   Updated: 2023/10/31 09:54:52 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include <iostream>
#include <cctype>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact _ContactArray[8];
		int		_NbContact;
		int		_OldestContact;
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void SetNbContact(int NewNbContact);
		void SetOldestContact(int NewContact);
		void AddContact(void);
		void SearchContact(void);
		void DisplayAllPhoneBook(void);
		void DisplayContact(std::string index);
};

#endif 