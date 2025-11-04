
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void) {
	ClapTrap	clap("Pest");
	ScavTrap	scav("Joy");

	clap.attack("Joy");
	scav.takeDamage(clap.getAtk());
	scav.attack("Pest");
	clap.takeDamage(scav.getAtk());
	scav.attack("Pest");
	clap.takeDamage(5);
	clap.beRepaired(5);
	clap.takeDamage(11);
	scav.guardGate();
	return (0);
}
