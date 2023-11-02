/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:57:47 by lciullo           #+#    #+#             */
/*   Updated: 2023/11/02 13:45:05 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string Zombie = "Molly";
	std::string* stringPTR = &Zombie;
	std::string& stringREF = Zombie;
	std::cout << std::endl;
	std::cout << "====== ADDRESS ======" << std::endl;
	std::cout << "Zombie    : " << &Zombie << std::endl;
	std::cout << "stringPTR : " << stringPTR << std::endl;
	std::cout << "stringREF : " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "====== VARIABLES ======" << std::endl;
	std::cout << "Zombie    : " << Zombie << std::endl;
	std::cout << "stringPTR : " << *stringPTR << std::endl;
	std::cout << "stringREF : " << stringREF << std::endl;
	return (0);
}