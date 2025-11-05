/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stempels <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 12:58:36 by stempels          #+#    #+#             */
/*   Updated: 2025/11/05 14:31:30 by stempels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string new_name): ClapTrap(new_name) {
	setHp(100);
	setMp(50);
	setAtk(20);
	std::cout << "SCAVCONSTR: Alive sbire ! I'm " << name << " and Alive !" << std::endl;
	std::cout << hp << "\t" << mp << "\t" << atk << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& source) : ClapTrap(source.getName()){
	*this = source;
	std::cout << "SCAVCOPY: Loook sbire ! A new mini me !" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "SCAVDESTR: I, " << getName() << ", am dead and it's your fault sbire !" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& source) {
	if (this == &source)
		return (*this);
	hp = source.getHp();
	mp = source.getMp();
	atk = source.getAtk();
	return (*this);
}

void	ScavTrap::attack(const std::string& target) {
	int	hp = getHp();
	if (hp <= 0) {
		std::cout << "ScavTrap " << getName() << " is dead and cannot act !" << std::endl;
		return ;
	}

	int	mp = getMp();
	if (mp > 0) {
		setMp(mp - 1);
		std::cout << "Scavtrap " << getName() << " attack " << target << ", causing " << getAtk() << " points of damage !" << std::endl;
		std::cout << "ScavTrap " << getName() << " has " << getMp() << " energy left !" << std::endl;
	}
	else
		std::cout << "ScavTrap " << getName() << " is to tired to attack !" << std::endl;
	return ;
}

void	ScavTrap::guardGate(void) {
	std::cout << "Sbire, " << getName() << " got your back !" << std::endl;
	return ;
}
