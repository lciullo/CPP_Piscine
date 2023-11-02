/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisa <lisa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:07:22 by lciullo           #+#    #+#             */
/*   Updated: 2023/11/03 00:02:22 by lisa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
#define SED_HPP

#include <iostream>

#include <fstream>

#include <string>

#include <iomanip>

void SearchAndReplace(const char *filename, std::string s1, std::string s2);

#endif 