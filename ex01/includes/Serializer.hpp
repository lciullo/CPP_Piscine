/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 11:44:28 by lciullo           #+#    #+#             */
/*   Updated: 2023/12/11 10:31:46 by lciullo          ###   ########.fr       */
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
				//======    Constructors / Destructors   ======
				Serializer(void);
				Serializer(const Serializer &other);
				~Serializer(void);
				//======    Overload operator            ======
				Serializer &operator=(const Serializer &other);
				//======	          Method             ======
				static uintptr_t	serialize(Data* ptr);
				static Data*		deserialize(uintptr_t raw);			
};

#endif