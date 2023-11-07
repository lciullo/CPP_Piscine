/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisa <lisa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 08:58:29 by lciullo           #+#    #+#             */
/*   Updated: 2023/11/07 21:42:32 by lisa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

#include <cmath>

class Fixed 
{
	public:
			Fixed(void);
			Fixed(const Fixed &other);
			Fixed(const int Nb);
			Fixed(const float Nb);
			~Fixed(void);
			Fixed &operator=(const Fixed &Object);
			int toInt(void) const;
			float toFloat(void) const;
			int getRawBits(void) const;
			void setRawBits(int const raw);				
	private:
			int 			_FixedPoint;
			int const static _NbBits = 8;
			     
};

std::ostream &operator<<(std::ostream &out, const Fixed &Object);

#endif 
