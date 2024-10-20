/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 13:45:08 by lciullo           #+#    #+#             */
/*   Updated: 2023/12/14 14:14:09 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <exception>
#include <algorithm>

class Span 
{
	private:
				std::vector<int>	_array;
				unsigned int		_N;

	public:

				//======    Constructors / Destructors    ======
				Span();
				Span(unsigned int N);
				Span(const Span &obj);
				~Span(void);
				//======    Overload operator             ======
				Span &operator=(const Span &obj);
				//======    Exception   ======
				class tooManyInput : public std::exception
				{
					public :
							const char *	what() const throw() 
							{
								return ("Error, too many arguments");
							}
				};
				class tooFewInput : public std::exception
				{
					public :
							const char *	what() const throw() 
							{
								return ("Error, too few arguments");
							}
				};
				//======    Methods   ======
				void	addNumber(int number);
				void    addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
				int		shortestSpan();
				int		longestSpan();			
};

#endif 