/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stempels <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 17:34:34 by stempels          #+#    #+#             */
/*   Updated: 2025/10/23 18:01:33 by stempels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B
# define HUMAN_B

#include "Weapon.hpp"
#include <string>
#include <iostream>

class	HumanB {
	public:
		HumanB(std::string name);
		~HumanB();
		void	attack();
		void	setWeapon(Weapon &weapon);
	private:
		const std::string	name;
		Weapon				weapon;
};

#endif
