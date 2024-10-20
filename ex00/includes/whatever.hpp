/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 11:41:31 by lciullo           #+#    #+#             */
/*   Updated: 2023/12/11 16:16:46 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
T max(T&a, T&b)
{
   if (a > b)
	  return (a);
   else
	  return (b);
}

template <typename T>
void swap(T &a, T &b) {
    T tmp = a;
    a = b;
    b = tmp;
}

template <typename T>
T min(T& a, T& b)
{
   if (a < b)
	  return (a);
   else
	  return (b);
}

#endif