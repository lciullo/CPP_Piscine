/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:07:22 by lciullo           #+#    #+#             */
/*   Updated: 2023/11/04 13:30:45 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
#define SED_HPP

#include <iostream>

#include <fstream>

void SearchAndReplace(const char *filename, std::string s1, std::string s2);

int	OpenFile(std::ifstream	&ifs, std::ofstream	&ofs, const char *filename);

#endif 