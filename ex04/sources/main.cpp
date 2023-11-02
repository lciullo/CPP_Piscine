/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisa <lisa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:43:01 by lciullo           #+#    #+#             */
/*   Updated: 2023/11/02 23:26:43 by lisa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

void SearchAndReplace(const char *filename, std::string to_find, std::string replace)
{
	std::ifstream	ifs;
	std::ofstream	ofs;
	std::string		line;
	std::string		outfile = filename;
	(void)to_find;
	(void)replace;
	ifs.open(filename, std::ifstream::in);
	if (ifs.is_open() == false)
	{
		std::cout << filename << " could not be opened" << std::endl;
		return ;
	}
	ofs.open((outfile.substr(0, outfile.find_last_of('.')) += ".replace").c_str(), std::ifstream::out);
	if (ofs.is_open() == false)
	{
		std::cout <<  " Outfile could not be opened" << std::endl;
		return ;
	}
	while (getline(ifs, line))
	{
		if (!std::cin.eof())
			ofs << line << std::endl;
	}
	ifs.close();
	ofs.close();
}

int main(int ac, char **av)
{
	if (ac != 4)
		std::cout << "Wrong number of arguments" << std::endl;
	else
	{
		std::string check = av[1];
		std::string s1 = av[2];
		std::string s2 = av[3];
		if ((check.length() == 0) || (s1.length() == 0) || (s2.length() == 0))
		{
			std::cout << "Error don't pu empty argument" << std::endl; 
			return (2);
		}
		SearchAndReplace(av[1], s1, s2);
	}
	 
	return (0);
}

