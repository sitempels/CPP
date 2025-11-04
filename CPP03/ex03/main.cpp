
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void) {
	ClapTrap	clap("Pest");
	ScavTrap	scav("Joy");
	FragTrap	frag("Pizza");

	clap.attack("Joy");
	scav.takeDamage(clap.getAtk());
	scav.attack("Pizza");
	frag.takeDamage(scav.getAtk());
	frag.attack("Pest");
	clap.takeDamage(frag.getAtk());
	scav.guardGate();
	frag.highFivesGuys();
	return (0);
}
