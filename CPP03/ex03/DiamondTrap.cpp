/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stempels <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 13:09:24 by stempels          #+#    #+#             */
/*   Updated: 2025/11/05 14:29:55 by stempels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	std::cout << "DiamondTrap default constructor" << std::endl;
	std::cout << hp << "\t" << mp << "\t" << atk << std::endl;
}

DiamondTrap::DiamondTrap(std::string new_name): ClapTrap(new_name + "_clap_name") {
	name = new_name;
	setHp(FragTrap::hp);
	setMp(ScavTrap::mp);
	setAtk(FragTrap::atk);
	std::cout << "DIAMCONSTR: Make place fooooor " << name << " !" << std::endl;
	std::cout << hp << "\t" << mp << "\t" << atk << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& source) : ClapTrap(source), ScavTrap(source), FragTrap(source) {
	*this = source;
	std::cout << "DIAMCONSTR: Loook sbire ! A new mini me !" << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DIAMDESTR: RIP " << getName() << std::endl;
}

std::string	DiamondTrap::getName() const {
	return (name);
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& source) {
	if (this == &source)
		return (*this);
	hp = source.getHp();
	mp = source.getMp();
	atk = source.getAtk();
	return (*this);
}

void	DiamondTrap::whoAmI() const {
	std::cout << "I'm " << name << ", and my ClapTrap identity is " << ClapTrap::name << " !!" << std::endl;
	return ;
}
