/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisa <lisa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:43:01 by lciullo           #+#    #+#             */
/*   Updated: 2023/11/04 23:12:18 by lisa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int OpenFile(std::ifstream	&ifs, std::ofstream	&ofs, const char *filename)
{
	std::string		outfile = filename;
	
	
	ifs.open(filename, std::ifstream::in);
	std::fstream(filename, std::ios::in);
	if (ifs.is_open() == false)
	{
		std::cerr << filename << " : could not be opened" << std::endl;
		return (-1);
	}
	ofs.open((outfile.substr(0, outfile.find_last_of('.')) += ".replace").c_str(), std::ios::trunc);
	if (ofs.is_open() == false)
	{
		std::cerr << outfile <<  " : could not be opened" << std::endl;
		return (-1);
	}
	return (1);
}

void SearchAndReplace(const char *filename, std::string to_find, std::string to_replace)
{
	std::ifstream		ifs;
	std::ofstream		ofs;
	std::string			text;
	size_t				end = 0;
	size_t				start = 0;
	if (OpenFile(ifs, ofs, filename) == -1)
		return ;
	std::stringstream buffer;
	buffer << ifs.rdbuf();
	text = buffer.str();
	end = text.find(to_find, start);
	while (end != std::string::npos)
	{
		ofs << text.substr(start, end - start);
		ofs << to_replace;
		start = end + to_find.length();
		end = text.find(to_find, start);
	}
	ofs << text.substr(start);
	ifs.close();
	ofs.close();
}

int main(int ac, char **av)
{
	if (ac != 4)
		std::cerr << "Wrong number of arguments" << std::endl;
	else
	{
		std::string s1 = av[2];
		std::string s2 = av[3];
		if ((!av[1][0]) || (s1.length() == 0))
		{
			std::cerr << "Error don't put empty argument with filename and s1" << std::endl; 
			return (2);
		}
		SearchAndReplace(av[1], s1, s2);
	}
	return (0);
}

