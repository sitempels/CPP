/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stempels <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 12:59:44 by stempels          #+#    #+#             */
/*   Updated: 2025/11/05 12:59:47 by stempels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void) {
	ClapTrap	clap("Pest");
	ScavTrap	scav("Joy");

	clap.attack("Joy");
	scav.takeDamage(clap.getAtk());
	scav.attack("Pest");
	clap.takeDamage(scav.getAtk());
	scav.attack("Pest");
	clap.takeDamage(5);
	clap.beRepaired(5);
	clap.takeDamage(11);
	scav.guardGate();
	return (0);
}
