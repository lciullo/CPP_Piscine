/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 13:46:08 by lciullo           #+#    #+#             */
/*   Updated: 2023/12/14 14:20:48 by lciullo          ###   ########.fr       */
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
		throw noOccurence();
	}
}