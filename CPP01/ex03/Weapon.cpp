/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stempels <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 17:28:36 by stempels          #+#    #+#             */
/*   Updated: 2025/10/23 17:50:46 by stempels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weaponType) {
	type = weaponType;
}

Weapon::~Weapon() {
}

std::string	Weapon::getType(void) const {
	return (type);
}

void	Weapon::setType(std::string weaponType) {
	type = weaponType;
}
