/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:43:20 by lciullo           #+#    #+#             */
/*   Updated: 2023/11/17 10:30:45 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	Animal Test;
	Cat Miaou;
	Dog Woof;
	Miaou.makeSound();
	Woof.makeSound();
	return (0);
}