/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stempels <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 17:31:32 by stempels          #+#    #+#             */
/*   Updated: 2025/10/23 18:08:06 by stempels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name), weapon("fist"){
}

HumanB::~HumanB() {
}

void	HumanB::setWeapon(Weapon &new_weapon) {
	weapon.setType(new_weapon.getType());
}

void	HumanB::attack() {
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
