/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisa <lisa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 11:44:28 by lciullo           #+#    #+#             */
/*   Updated: 2023/12/09 17:03:57 by lisa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

# include <iostream>
# include <exception>
# include <cstdlib>
#include <ctime>
# define RED		"\033[31m"
# define RESET		"\033[0m"

class Base
{
	public :
				//======    Constructors / Destructors   ======
				virtual	~Base(void);
};

//======	          Inherit from base            ======

class A : public Base
{
	
};

class B : public Base 
{
	
};

class C : public Base 
{
	
};

//======	         Functions            ======

Base *	generate(void);
void	identify(Base* p);
void	identify(Base& p);


#endif