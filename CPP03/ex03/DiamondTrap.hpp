/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stempels <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:01:52 by stempels          #+#    #+#             */
/*   Updated: 2025/11/05 14:23:25 by stempels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

/*Includes*/
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
	public:
		/*Constructor-Copy Constructor-Destructor*/
		DiamondTrap();
		DiamondTrap(std::string name = "dftUnit");
		DiamondTrap(const DiamondTrap& source);
		~DiamondTrap();

		/*Overloaded Operators*/
		DiamondTrap&	operator=(const DiamondTrap& source);

		/*Public methods*/
		void	whoAmI() const;
		/*Getter*/
		std::string	getName() const;

	private:
		std::string	name;
};

#endif
