/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisa <lisa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 14:28:41 by lciullo           #+#    #+#             */
/*   Updated: 2023/10/26 15:58:37 by lisa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	Contact 	Contact;
	PhoneBook	PhoneBook;
	std::string input;
	
	while (1)
	{
		if (input != "EXIT" && !(std::cin.eof()))
			std::cout << "ADD SEARCH EXIT" << std::endl;
		getline(std::cin, input);
		if ((std::cin.eof()) || (input == "EXIT"))
				break ;
		if (input == "ADD")
			PhoneBook.AddContact();
		if (input == "SEARCH")
			PhoneBook.SearchContact();
			
	}
	std::cout << "See you soon Xoxo Gossip Girl" << std::endl;
	return (0);
}