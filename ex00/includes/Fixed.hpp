/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisa <lisa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 09:23:14 by lciullo           #+#    #+#             */
/*   Updated: 2023/11/06 21:39:39 by lisa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed 
{
	public:
			Fixed(void);
            ~Fixed(void);
			Fixed(const Fixed&);
			int getRawBits(void) const;
			void setRawBits(int const raw);
			Fixed &operator=(const Fixed &Object);
	private:
			int 			_FixedPoint;
			int const static _NbBits;
			     
};

#endif 