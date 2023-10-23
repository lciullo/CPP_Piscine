/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:07:46 by lciullo           #+#    #+#             */
/*   Updated: 2023/10/23 14:44:10 by lciullo          ###   ########.fr       */
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
	void	test(void);
};

//std::cout << ct.getName();