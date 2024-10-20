/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 11:41:31 by lciullo           #+#    #+#             */
/*   Updated: 2023/12/12 12:54:01 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

# include <iostream>
# include <cstdlib>
# include <time.h>


# define RESET		"\033[0m"
# define CYAN		"\033[36m"
# define MAGENTA	"\033[35m"
# define RED		"\033[31m"

template <typename T>
class Array {
	public :
				//======    Constructors / Destructor   ======
				Array();
				Array(unsigned int n);
				Array(const Array &obj);
				~Array(void);
				
				//======    Overload operators          ======
				
				Array &operator=(const Array &obj);
				T &operator[](unsigned int i);
				
				//======    Getter                       ======
				
				unsigned int size(void) const;
				
	private :
				//======    Attributes   ======
				
				T 				*_array;
				unsigned int 	_n;				
};

# include "Array.tpp"

#endif