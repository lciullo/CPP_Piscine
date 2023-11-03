/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:43:01 by lciullo           #+#    #+#             */
/*   Updated: 2023/11/03 12:34:39 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

void SearchAndReplace(const char *filename, std::string to_find, std::string to_replace)
{
	std::ifstream	ifs;
	std::ofstream	ofs;
	std::string		outfile = filename;
	std::string		line;
	std::string 	start;
	std::string		end;
	size_t			pos = 0;
	ifs.open(filename, std::ifstream::in);
	if (ifs.is_open() == false)
	{
		std::cout << filename << " : could not be opened" << std::endl;
		return ;
	}
	ofs.open((outfile.substr(0, outfile.find_last_of('.')) += ".replace").c_str(), std::ifstream::out);
	if (ofs.is_open() == false)
	{
		std::cout << outfile <<  " : could not be opened" << std::endl;
		return ;
	}
	while (true)
	{
		std::getline(ifs, line);
		while (true)
		{
			pos = line.find(to_find);
			if (pos != std::string::npos)
			{
				start = line.substr(0, pos);
				end = line.substr(pos + to_find.length(), line.length() - (pos + to_find.length()));
				line = end;
				ofs << start + to_replace;
			}
			else
			{
				ofs << line;
				break ;
			}
		}
		ofs << std::endl;
		if (ifs.eof())
			break ;
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
		std::string s1 = av[2];
		std::string s2 = av[3];
		if ((!av[1][0]) || (s1.length() == 0) || (s2.length() == 0))
		{
			std::cout << "Error don't put empty argument" << std::endl; 
			return (2);
		}
		SearchAndReplace(av[1], s1, s2);
	}
	 
	return (0);
}

