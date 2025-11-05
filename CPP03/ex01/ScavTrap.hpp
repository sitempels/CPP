/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stempels <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:01:52 by stempels          #+#    #+#             */
/*   Updated: 2025/11/05 14:34:19 by stempels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

/*Includes*/
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public:
		/*Constructor-Copy Constructor-Destructor*/
		ScavTrap(std::string name = "dftUnit");
		ScavTrap(const ScavTrap& source);
		~ScavTrap();

		/*Overloaded Operators*/
		ScavTrap&	operator=(const ScavTrap& source);

		/*Public methods*/
		void	attack(const std::string& target);
		void	guardGate(void) ;

	private:
};

#endif
