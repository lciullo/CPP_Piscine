/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisa <lisa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 13:46:08 by lciullo           #+#    #+#             */
/*   Updated: 2023/12/13 23:13:45 by lisa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template <typename T>
void easyfind(T &container, int nb)
{
	typename T::iterator it = std::find(container.begin(), container.end(), nb);
	if (it != container.end()) 
	{
		std::cout << "We have find : " << nb << " in this container" << std::endl;
		return; 
	} 
	else
	{
		std::cout << "Not occurence was found" << std::endl;
		throw std::exception();
	}
}