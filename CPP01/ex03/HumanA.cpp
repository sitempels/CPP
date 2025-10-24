/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stempels <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 17:29:49 by stempels          #+#    #+#             */
/*   Updated: 2025/10/24 07:18:46 by stempels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &new_weapon): name(name), weapon(&new_weapon) {
}

HumanA::~HumanA() {
}

void	HumanA::attack() {
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}
