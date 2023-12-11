/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisa <lisa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 11:44:28 by lciullo           #+#    #+#             */
/*   Updated: 2023/12/09 16:44:54 by lisa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <stdint.h>

# define RED		"\033[31m"
# define RESET		"\033[0m"

struct Data
{
	int value;
};

class Serializer
{
	public	:	
				//======	          Method             ======
				static uintptr_t	serialize(Data* ptr);
				static Data*		deserialize(uintptr_t raw);
	private : 	
				//======    Constructors / Destructors   ======
				Serializer(void);
				Serializer(const Serializer &other);
				~Serializer(void);
				//======    Overload operator            ======
				Serializer &operator=(const Serializer &other);
				
};

#endif