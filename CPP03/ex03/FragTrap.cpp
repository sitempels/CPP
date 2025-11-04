
#include "FragTrap.hpp"

FragTrap::FragTrap(std::string new_name): ClapTrap(new_name) {
	setHp(100);
	setMp(100);
	setAtk(30);
	std::cout << "Here come " << name << " !" << std::endl;
}

FragTrap::FragTrap(const FragTrap& source) : ClapTrap(source.getName()){
	*this = source;
	std::cout << "Loook sbire ! A new mini me !" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "Not me, " << getName() << ", take the sbire instead !" << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& source) {
	if (this == &source)
		return (*this);
	//name = source.getName();
	hp = source.getHp();
	mp = source.getMp();
	atk = source.getAtk();
	return (*this);
}

void	FragTrap::highFivesGuys(void) {
	std::cout << "Sbire, highfive " << getName() << " !" << std::endl;
	return ;
}
