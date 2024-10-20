/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 09:23:14 by lciullo           #+#    #+#             */
/*   Updated: 2023/11/08 10:56:02 by lciullo          ###   ########.fr       */
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
			Fixed(const Fixed &other);
			int getRawBits(void) const;
			void setRawBits(int const raw);
			Fixed &operator=(const Fixed &Object);
	private:
			int 			_FixedPoint;
			int const static _FractionalBits;
			     
};

#endif 