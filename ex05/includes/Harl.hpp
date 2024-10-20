/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:45:59 by lciullo           #+#    #+#             */
/*   Updated: 2023/11/03 13:04:30 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
class Harl
{
	private:
			void debug(void);
			void info(void);
			void warning(void);
			void error(void);
			
	public:
			Harl(void);
			~Harl(void);
			void complain(std::string level); 	   
};
#endif 