
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string new_name): ClapTrap(new_name + "_clap_name") {
	name = ClapTrap::name;
	hp = FragTrap::hp;
	mp = ScavTrap::mp;
	atk = FragTrap::atk;
	std::cout << "Alive sbire ! I'm " << name << " and Alive !" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& source) : ClapTrap(source.getName()){
	*this = source;
	std::cout << "Loook sbire ! A new mini me !" << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "I, " << getName() << ", am dead and it's your fault sbire !" << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& source) {
	if (this == &source)
		return (*this);
	//name = source.getName();
	hp = source.getHp();
	mp = source.getMp();
	atk = source.getAtk();
	return (*this);
}

void	DiamondTrap::whoAmI() const {
	std::cout << "I'm " << name < ", and my ClapTrap identity is " << ClapTrap::name << " !!" << std::endl;
	return ;
}
