/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:07:46 by lciullo           #+#    #+#             */
/*   Updated: 2023/10/25 11:04:27 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact ContactArray[8];
		int	NbContact;
		int	OldestContact;
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void SetNbContact(int NewNbContact);
		void SetOldestContact(int NewContact);
	
};

//std::cout << ct.getName();