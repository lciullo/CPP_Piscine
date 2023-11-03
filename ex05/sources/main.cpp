/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:45:53 by lciullo           #+#    #+#             */
/*   Updated: 2023/11/03 15:24:27 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl instance;

	void(Harl::*f)(std::string) = &Harl::complain;
	(instance.*f)("INFO");
	return (0);
}