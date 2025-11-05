/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stempels <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 13:03:51 by stempels          #+#    #+#             */
/*   Updated: 2025/11/05 14:31:38 by stempels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string new_name): ClapTrap(new_name) {
	setHp(100);
	setMp(100);
	setAtk(30);
	std::cout << "FRAGCONSTR: Here come " << name << " !" << std::endl;
	std::cout << hp << "\t" << mp << "\t" << atk << std::endl;
}

FragTrap::FragTrap(const FragTrap& source) : ClapTrap(source.getName()){
	*this = source;
	std::cout << "FRAGCOPY: Loook sbire ! A new mini me !" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FRAGDESTR: Not me, " << getName() << ", take the sbire instead !" << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& source) {
	if (this == &source)
		return (*this);
	hp = source.getHp();
	mp = source.getMp();
	atk = source.getAtk();
	return (*this);
}

void	FragTrap::highFivesGuys(void) {
	std::cout << "Sbire, highfive " << getName() << " !" << std::endl;
	return ;
}
