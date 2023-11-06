/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 09:23:14 by lciullo           #+#    #+#             */
/*   Updated: 2023/11/06 13:20:32 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed 
{
	private:
			int 			_StockFloat;
			int const static _NbBits;
	public:
			Fixed(void);
            ~Fixed(void);
			Fixed(const Fixed&);
			int getRawBits(void) const;
			void setRawBits(int const raw );		     
};

#endif 