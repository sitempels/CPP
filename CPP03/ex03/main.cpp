
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void) {
	ClapTrap	clap("Pest");
	ScavTrap	scav("Joy");
	FragTrap	frag("Pizza");
	DiamondTrap	diam("Rubis");

	clap.attack("Joy");
	scav.takeDamage(clap.getAtk());
	scav.attack("Pizza");
	frag.takeDamage(scav.getAtk());
	frag.attack("Rubis");
	diam.takeDamage(frag.getAtk());
	diam.attack("Pest");
	clap.takeDamage(diam.getAtk());
	scav.guardGate();
	frag.highFivesGuys();
	diam.whoAmI();
	return (0);
}
