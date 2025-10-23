/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stempels <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 17:33:17 by stempels          #+#    #+#             */
/*   Updated: 2025/10/23 17:45:25 by stempels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A
# define HUMAN_A

#include "Weapon.hpp"
#include <string>
#include <iostream>

class	HumanA {
	public:
		HumanA(std::string name, Weapon &weaponType);
		~HumanA();
		void	attack();
	private:
		const std::string	name;
		const Weapon		weapon;
};

#endif
