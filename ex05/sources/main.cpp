/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:45:53 by lciullo           #+#    #+#             */
/*   Updated: 2023/11/04 13:32:57 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl instance;
	instance.complain("DEBUG");
	instance.complain("INFO");
	instance.complain("WARNING");
	instance.complain("ERROR");
	instance.complain("DEBUG");
	instance.complain("INFO");
	instance.complain("WARNING");
	instance.complain("ERROR");	
	instance.complain("DEBUG");
	instance.complain("INFO");
	instance.complain("WARNING");
	instance.complain("ERROR");
	instance.complain("DEBUG");
	instance.complain("INFO");
	instance.complain("WARNING");
	instance.complain("ERROR");		
	return (0);
}