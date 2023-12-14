/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 13:45:08 by lciullo           #+#    #+#             */
/*   Updated: 2023/12/14 14:20:33 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASY_FIND_HPP
#define EASY_FIND_HPP

#include <iostream> 
#include <algorithm>
#include <stdexcept>
#include <list>
#include <vector>

template <typename T>
void easyfind(T &container, int nb);

//======    Exception   ======

class noOccurence : public std::exception
{
	public :
				const char *	what() const throw() 
				{
					return ("Error, no occurence was found");
				}
};

#include "easyfind.tpp"

#endif 