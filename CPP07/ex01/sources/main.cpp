/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 11:41:36 by lciullo           #+#    #+#             */
/*   Updated: 2023/12/11 17:16:18 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"


int main(void) 
{
	std::cout << "Int array " << std::endl;
	const int firstArray[] = {1, 2, 3, 4, 5};
    size_t firstArrayLength = 5;
    ::iter(firstArray, firstArrayLength, printElement);
	std::cout << "=============== " << std::endl;
	std::cout << "Double array " << std::endl;
    double secondArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    size_t secondArrayLength = 5;
    ::iter(secondArray, secondArrayLength, printElement<double>);
    std::cout << "=============== " << std::endl;
	std::cout << "Const array " << std::endl;
	const std::string	constArray[] = {"Chocolat", "Vanille", "Fraise", "Framboise"};
	size_t	constLenght = 4;
	::iter(constArray, constLenght, printElement<const std::string>);
	return (0);
}
