/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisa <lisa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 13:46:24 by lciullo           #+#    #+#             */
/*   Updated: 2023/12/13 23:12:28 by lisa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
	std::cout << "Search 3, in this container : {1,2,3,4,5}" << std::endl;
	std::vector<int> firstContainer;
	int Array[] = {1, 2, 3, 4, 5};
	firstContainer.assign(Array, Array + 5);
	try 
	{
		easyfind(firstContainer, 3);
	} 
	catch (const std::exception& e) 
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "======================================" << std::endl;
	std::cout << "Search 100, in this container : {10,20,30,40,50}" << std::endl;
	std::list<int> secondContainer;
	int listArray[] = {10, 20, 30, 40, 50};
	secondContainer.assign(listArray, listArray + 5);
	try 
	{
		easyfind(secondContainer, 100);
	} catch (const std::exception& e) 
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}