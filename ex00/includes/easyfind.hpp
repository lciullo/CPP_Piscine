/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisa <lisa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 13:45:08 by lciullo           #+#    #+#             */
/*   Updated: 2023/12/13 22:59:27 by lisa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASY_FIND_HPP
#define EASY_FIND_HPP

#include <iostream> 
#include <algorithm>
#include <stdexcept>
#include <list>
#include <vector>

template <typename T>
void easyfind(T &container, int nb);

#include "easyfind.tpp"

#endif 