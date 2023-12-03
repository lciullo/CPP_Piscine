/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisa <lisa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:17:51 by lciullo           #+#    #+#             */
/*   Updated: 2023/12/03 23:27:18 by lisa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	Bureaucrat				belica = Bureaucrat("Belica", 1);
	Bureaucrat				lea = Bureaucrat("Lea", 149);
	PresidentialPardonForm	presidentialForm("Zed");
	RobotomyRequestForm		robotForm("Marvin");
	ShrubberyCreationForm	shrubberyForm("groot");
	belica.signForm(presidentialForm);
	lea.executeForm(presidentialForm);
	belica.executeForm(presidentialForm);
	belica.signForm(robotForm);
	lea.executeForm(robotForm);
	belica.executeForm(robotForm);
	belica.signForm(shrubberyForm);
	lea.executeForm(shrubberyForm);
	belica.executeForm(shrubberyForm);
	return (0);
}
