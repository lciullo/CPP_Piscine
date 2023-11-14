#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	public  :   
				FragTrap(void);
				FragTrap(const std::string Name);
				FragTrap(const FragTrap &other);
				~FragTrap(void);
				FragTrap &operator=(const FragTrap &other);
				void attack(const std::string& target);
				void highFivesGuys(void);
};

#endif