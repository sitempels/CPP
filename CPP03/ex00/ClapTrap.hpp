/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stempels <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:01:52 by stempels          #+#    #+#             */
/*   Updated: 2025/11/04 16:15:00 by stempels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

/*Includes*/
# include <iostream>

class ClapTrap {
	public:
		/*Constructor-Copy Constructor-Destructor*/
		ClapTrap(std::string name);
		/*Public methods*/
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int	amount);
		/*Getter-Setter*/
	private;
		/*Private Attributes*/
		std::string	name;
		int			hp;
		int			mp;
		int			atk;
};

#endif

#include "ClapTrap.hpp"

void	ClapTrap::attack(const std::string& target) {
	std::cout << "Claptrap" << getName() << "attacks" << target << ", causing" << getAtk() << "points of damage !" << std::endl;
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	unsigned int	total = getAmount();

	if (amount > total)
		setHp(0);
	else
		setHp(total - amount);
	std::cout << "Claptrap" << getName() << "take" << amount << " of damage, reducing HP to " << getHp() << std::endl;
	return 
}
