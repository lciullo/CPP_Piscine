#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap Tom("Tom");
	ClapTrap Jerry("Jerry");
	Tom.takeDamage(10);
	Jerry.takeDamage(11);
	return (0);
}