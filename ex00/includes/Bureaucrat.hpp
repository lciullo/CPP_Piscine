/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisa <lisa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:17:45 by lciullo           #+#    #+#             */
/*   Updated: 2023/11/28 11:07:20 by lisa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

# define MAGENTA "\033[35m"
/*Bureaucrat GradeTooHighException;
 Bureaucrat::GradeTooLowException*/
 
class Bureaucrat
{
	public	:
				Bureaucrat(void);
				Bureaucrat(const Bureaucrat &other);
				Bureaucrat &operator=(const Bureaucrat &other);
				virtual ~Bureaucrat(void);
				std::string	GetName(void) const;
				int GetGrade(void) const;
				void SetGrade(int Grade);
				void IncreaseGrade(void);
				void DecreaseGrade(void);
	private : 
				const std::string 	_Name;
				int					_Grade;

	
};

#endif 