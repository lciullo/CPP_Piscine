/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 08:58:29 by lciullo           #+#    #+#             */
/*   Updated: 2023/11/07 15:25:38 by lciullo          ###   ########.fr       */
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
			Fixed(const int Nb);
			Fixed(const float Nb);
			int toInt(void) const;
			float toFloat(void) const;
			int getRawBits(void) const;
			void setRawBits(int const raw);
			Fixed &operator=(const Fixed &Object);		
	private:
			int 			_FixedPoint;
			int const static _NbBits;
			     
};

std::ostream &operator<<(std::ostream &out, const Fixed &Object);

#endif 
