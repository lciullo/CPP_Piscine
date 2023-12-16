#include "BictoinExchange.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << RED << "Error, wrong number of aguments" << RESET << std::endl;
		std::cout << GREEN << "Valid input : ./btc file" << RESET << std::endl;
	}
	(void)av;
	return (0);
}