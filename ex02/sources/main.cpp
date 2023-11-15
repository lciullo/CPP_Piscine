#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	std::cout << "============" << std::endl;
	std::cout << "CLAP TRAP " << std::endl;
	ClapTrap Clap("Clap");
	ClapTrap Trap("Trap");
	std::cout << std::endl;
	Clap.attack("Trap");
	Trap.takeDamage(11);
	Trap.beRepaired(11);
	Trap.attack("Clap");
	Clap.takeDamage(11);
	Clap.beRepaired(11);
	std::cout << std::endl;
	std::cout << "============" << std::endl;
	std::cout << "SCAV TRAP " << std::endl;
	ScavTrap Scav("Scav");
	ScavTrap Trap1("Trap1");
	std::cout << std::endl;
	Scav.attack("Trap1");
	Trap1.takeDamage(11);
	Trap1.beRepaired(11);
	Trap1.attack("Scav");
	Scav.takeDamage(11);
	Scav.beRepaired(11);
	Scav.guardGate();
	std::cout << std::endl;
	std::cout << "============" << std::endl;
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
	std::cout << "FRAG TRAP " << std::endl;
	FragTrap Frag("Frag");
	FragTrap Trap2("Trap2");
	std::cout << std::endl;
	Frag.attack("Trap2");
	Trap2.takeDamage(11);
	Trap2.beRepaired(11);
	Trap2.attack("Frag");
	Frag.takeDamage(11);
	Frag.beRepaired(11);
	Frag.highFivesGuys();
	std::cout << std::endl;
	std::cout << "============" << std::endl;
	return (0);
}
