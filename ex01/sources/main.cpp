#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	std::cout << "============" << std::endl;
	std::cout << "CLAP TRAP " << std::endl;
	ClapTrap Tom("Tom");
	ClapTrap Jerry("Jerry");
	std::cout << std::endl;
	Tom.attack("Jerry");
	Jerry.takeDamage(11);
	Jerry.beRepaired(11);
	Jerry.attack("Tom");
	Tom.takeDamage(11);
	Tom.beRepaired(11);
	std::cout << std::endl;
	std::cout << "============" << std::endl;
	std::cout << "SCAV TRAP " << std::endl;
	ScavTrap Harry("Harry");
	ScavTrap Ron("Ron");
	std::cout << std::endl;
	Harry.attack("Ron");
	Ron.takeDamage(11);
	Ron.beRepaired(11);
	Ron.attack("Harry");
	Harry.takeDamage(11);
	Harry.beRepaired(11);
	Harry.guardGate();
	std::cout << std::endl;
	std::cout << "============" << std::endl;
	return (0);
}
