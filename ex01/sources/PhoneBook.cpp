/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:06:47 by lciullo           #+#    #+#             */
/*   Updated: 2023/10/17 13:21:24 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(int ac, char **av)
{
	if (ac == 1)
		cout << "Coucou on compile"  << endl;
	if (ac > 1)
	{
		cout << av[1]  << endl;
	}
	return (0);
}