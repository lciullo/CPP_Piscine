/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 09:27:30 by lciullo           #+#    #+#             */
/*   Updated: 2023/11/22 09:45:22 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

#include <string>

class Brain
{
	public	:
				Brain(void);
				Brain(const Brain &other);
				Brain &operator=(const Brain &other);
				~Brain(void);
				std::string const GetIdeas(const int i);
				void SetIdeas(std::string const &ideas ,const int i);
	private	:
				std::string _ideas[100];

	
};

#endif 