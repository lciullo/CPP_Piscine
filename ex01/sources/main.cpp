/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisa <lisa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 14:28:41 by lciullo           #+#    #+#             */
/*   Updated: 2023/10/25 20:43:18 by lisa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	Contact 	Contact;
	PhoneBook	PhoneBook;
	
	std::string input;
	while (getline(std::cin, input))
	{
		if ((std::cin.eof()) || (input == "EXIT"))
			break ;
		if (input == "ADD")
			PhoneBook.AddContact();
		if (input == "SEARCH")
			PhoneBook.SearchContact();	
	}
	std::cout << "end of prog" << std::endl;
	return (0);
}