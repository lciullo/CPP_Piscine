/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisa <lisa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 11:49:11 by lciullo           #+#    #+#             */
/*   Updated: 2023/12/09 16:44:10 by lisa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
    Data numberData;
    numberData.value = 42;
	uintptr_t ptr = Serializer::serialize(&numberData);
	Data *ptrData = Serializer::deserialize(ptr);
	if (&numberData == ptrData)
	{
		std::cout << "numberData addresse : " << &numberData << std::endl;
		std::cout << "ptrData             : " << ptrData << std::endl;
		std::cout << "ptrData->value      : " << ptrData->value << std::endl;
		std::cout << "numberData.value    : " << numberData.value << std::endl;
	}
	else 
	{
		std::cout << RED << "Failure" << RESET << std::endl;
		return (1);
	}
	return (0);
}