/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisa <lisa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 13:45:08 by lciullo           #+#    #+#             */
/*   Updated: 2023/12/13 23:52:33 by lisa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

# include <iostream>
# include <list>

class Span 
{
	private:
				std::list<int>	_lst;
				unsigned int	_N;

	public:

				//======    Constructors / Destructors    ======
				Span();
				Span(unsigned int N);
				Span(const Span &obj);
				~Span(void);
				//======    Overload operator             ======
				Span &operator=(const Span &obj);
				//======    Methods   ======
				void	addNumber(int number);
				void	addNumber(std::list<int>::const_iterator begin, std::list<int>::const_iterator end);
				int		shortestSpan();
				int		longestSpan();
};



#endif 