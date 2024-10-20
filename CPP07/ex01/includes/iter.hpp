/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 11:41:31 by lciullo           #+#    #+#             */
/*   Updated: 2023/12/11 17:21:06 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T *array, size_t length, void (*function)(T&)) 
{
	for (size_t i = 0; i < length; i++) 
		function(array[i]);
}

template <typename T>
void iter(const T *array, size_t length,  void (*function)(T const &)) 
{
	for (size_t i = 0; i < length; i++) 
		function(array[i]);
}

template <typename T>
void	printElement(T &array) 
{
	std::cout << array << std::endl;
	return ;
}

#endif