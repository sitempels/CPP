/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stempels <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:01:52 by stempels          #+#    #+#             */
/*   Updated: 2025/11/05 14:26:20 by stempels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

/*Includes*/
# include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap {
	public:
		/*Constructor-Copy Constructor-Destructor*/
		FragTrap(std::string name = "dftUnit");
		FragTrap(const FragTrap& source);
		virtual ~FragTrap();

		/*Overloaded Operators*/
		FragTrap&	operator=(const FragTrap& source);

		/*Public methods*/
		void	highFivesGuys(void) ;

	private:
};

#endif
