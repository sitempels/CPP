/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stempels <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:01:52 by stempels          #+#    #+#             */
/*   Updated: 2025/11/04 16:15:00 by stempels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

/*Includes*/
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
	public:
		/*Constructor-Copy Constructor-Destructor*/
		FragTrap(std::string name);
		FragTrap(const FragTrap& source);
		~FragTrap();

		/*Overloaded Operators*/
		FragTrap&	operator=(const FragTrap& source);

		/*Public methods*/
		void	highFivesGuys(void) ;

	private:
};

#endif
