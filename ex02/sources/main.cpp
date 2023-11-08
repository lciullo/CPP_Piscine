/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 08:59:28 by lciullo           #+#    #+#             */
/*   Updated: 2023/11/08 18:09:36 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


int	main(void)
{
	Fixed			a;
	Fixed const		b(Fixed(5.05f) * Fixed(2));
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	
	/*std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	std::cout << "Comparaison operators" << std::endl;
	std::cout << Fixed::min(3, 45) << std::endl;
	std::cout << Fixed::max(2, 3) << std::endl;
	std::cout << "Comparaison float" << std::endl;
	Fixed const Test(Fixed(3),Fixed(50));
	Fixed const Test1(Fixed(2),Fixed(75));*/
	
	return (0);
}
