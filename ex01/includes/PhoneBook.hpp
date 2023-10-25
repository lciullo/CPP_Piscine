/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:07:46 by lciullo           #+#    #+#             */
/*   Updated: 2023/10/25 15:21:53 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

#include "Contact.hpp"

# include <iomanip>

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
};
