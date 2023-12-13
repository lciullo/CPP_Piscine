/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisa <lisa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 13:45:08 by lciullo           #+#    #+#             */
/*   Updated: 2023/12/14 00:04:05 by lisa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
#define MUTANT_STACK_HPP

# include <iostream>
# include <stack>
# include <list>

# define RESET		"\033[0m"
# define BLACK		"\033[30m"
# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define YELLOW		"\033[33m"
# define BLUE		"\033[34m"
# define MAGENTA	"\033[35m"
# define CYAN		"\033[36m"
# define WHITE		"\033[37m"

template <typename T>
class MutantStack: public std::stack<T> 
{
	public:
			//======    Constructors / Destructors    ======
			MutantStack();
			MutantStack(const MutantStack &obj);
			~MutantStack(void);
			//======    Overload operator             ======
			MutantStack &operator=(const MutantStack &obj);
			//======    Iterator            ======
			typedef typename std::stack<T>::container_type::iterator iterator;
			iterator begin()
			{
				return (this->c.begin());
			}
			iterator end()
			{
				return (this->c.end());
			}
};

#include "MutantStack.tpp"

#endif 