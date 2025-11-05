/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stempels <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 13:04:40 by stempels          #+#    #+#             */
/*   Updated: 2025/11/05 14:42:41 by stempels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void) {
	ClapTrap	clap("Pest");
	ScavTrap	scav("Joy");
	FragTrap	frag("Pizza");
	FragTrap	dft;

	clap.attack("Joy");
	scav.takeDamage(clap.getAtk());
	scav.attack("Pizza");
	frag.takeDamage(scav.getAtk());
	frag.attack("Pest");
	clap.takeDamage(frag.getAtk());
	scav.guardGate();
	frag.highFivesGuys();
	dft.attack("a wall");
	return (0);
}
