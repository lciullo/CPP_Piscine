/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:36:28 by lciullo           #+#    #+#             */
/*   Updated: 2024/01/16 10:22:07 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

# define RESET		"\033[0m"
# define BLACK		"\033[30m"
# define RED		"\033[31m"
# define BLUE		"\033[34m"
# define MAGENTA	"\033[35m"
# define GREEN		"\033[32m"

#define INT_MIN -2147483648
#define INT_MAX 2147483647

#include <iostream>
#include <cstdlib>
#include <cctype>
#include <vector>
#include <algorithm>
#include <cmath>
#include <deque>
# include <ctime>
# include <sys/time.h>

//======    Parse input           ======

bool isValidInput(int ac, char **av);

bool checkEachArg(const char *input);

#include "Algorithm.tpp"

#include "Utils.tpp"

#endif 