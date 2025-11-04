
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string new_name): name(new_name), hp(10), mp(10), atk(0) {
	std::cout << "Behold sbire ! I'm " << name << " !" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& source) {
	*this = source;
	std::cout << "Behold sbire ! A new MEEEE !" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "Sbire ! HEEEELPP " << getName() << " ! AaaAargh !" << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& source) {
	if (this == &source)
		return (*this);
	name = source.getName();
	hp = source.getHp();
	mp = source.getMp();
	atk = source.getAtk();
	return (*this);
}

void	ClapTrap::attack(const std::string& target) {
	int	hp = getHp();
	if (hp <= 0) {
		std::cout << "ClapTrap " << getName() << " is dead and cannot act !" << std::endl;
		return ;
	}

	int	mp = getMp();
	if (mp > 0) {
		setMp(mp - 1);
		std::cout << "Claptrap " << getName() << " attack " << target << ", causing " << getAtk() << " points of damage !" << std::endl;
		std::cout << "ClapTrap " << getName() << " has " << getMp() << " energy left !" << std::endl;
	}
	else
		std::cout << "ClapTrap " << getName() << " is to tired to attack !" << std::endl;
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	unsigned int	hp = static_cast<unsigned int>(getHp());

	if (hp == 0) {
		std::cout << "You could still hit " << getName() << " but he is already dead !" << std::endl;
		return ;
	}
	if (amount > hp)
		setHp(0);
	else
		setHp(hp - amount);
	std::cout << "Claptrap " << getName() << " take " << amount << " of damage, reducing Hitpoints to " << getHp() << std::endl;
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	int	hp = getHp();
	if (hp <= 0) {
		std::cout << "ClapTrap " << getName() << " is dead and cannot act !" << std::endl;
		return ;
	
	}
	int	mp = getMp();
	if (mp > 0) {
		setHp(hp + amount);
		setMp(mp - 1);
		std::cout << "Claptrap " << getName() << " heal " << amount << " of damage,  Hitpoints are now " << getHp() << std::endl;
		std::cout << "ClapTrap " << getName() << " has " << getMp() << " energy left !" << std::endl;
	}
	else
		std::cout << "ClapTrap " << getName() << " is to tired to act !" << std::endl;
	return ;
}

std::string ClapTrap::getName() const {
	return (name);
}

int	ClapTrap::getHp() const {
	return (hp);
}

int	ClapTrap::getMp() const {
	return (mp);
}

int	ClapTrap::getAtk() const {
	return (atk);
}

void	ClapTrap::setHp(int amount) {
	hp = amount;
}

void	ClapTrap::setMp(int amount) {
	mp = amount;
}

void	ClapTrap::setAtk(int amount) {
	atk = amount;
}
