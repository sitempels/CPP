
#include "ClapTrap.hpp"

int	main(void) {
	ClapTrap	clap("Pest");

	clap.attack("a wall");
	clap.takeDamage(5);
	clap.beRepaired(5);
	clap.setMp(0);
	std::cout << "Mysteriously, " << clap.getName() << " lose all is energy !" << std::endl;
	clap.attack("a wall");
	clap.takeDamage(11);
	clap.takeDamage(11);
	return (0);
}
