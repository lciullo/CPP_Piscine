/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lciullo <lciullo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:43:01 by lciullo           #+#    #+#             */
/*   Updated: 2023/11/02 17:57:08 by lciullo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

/*std::ifstream ifs("file");
		unsigned int dst;
		ifs >> dst;
		std::cout << dst << " " << std::endl;
		ifs.close();
		std::ofstream ofs("test.out");
		ofs << "test number two" << std::endl;
		ofs.close();*/

void SearchAndReplace(const char *filename, std::string s1, std::string s2)
{
	std::ifstream	ifs;
	std::ofstream	ofs;
	unsigned int input = 0;
	unsigned int output = 0;
	std::string buffer;
	(void)s1;
	(void)s2;
	(void)output;
	ifs.open(filename, std::ifstream::in);
	ifs >> input;
	if (ifs.is_open() == false)
	{
		std::cout << filename << " could not be opened" << std::endl;
		return ;
	}
	ofs.open
	/*while (getline(input, buffer))
	{
		std::cout << "line = " << buffer << std::endl;
	}*/
}

int main(int ac, char **av)
{
	if (ac != 4)
		std::cout << "Wrong number of arguments" << std::endl;
	else
	{	
		const char *filename = av[1];
		std::string check = av[1];
		std::string s1 = av[2];
		std::string s2 = av[3];
		if ((check.length() == 0) || (s1.length() == 0) || (s2.length() == 0))
		{
			std::cout << "Error don't pu empty argument" << std::endl; 
			return (2);
		}
		SearchAndReplace(filename, s1, s2);
	}
	 
	return (0);
}

