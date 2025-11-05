/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stempels <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:01:52 by stempels          #+#    #+#             */
/*   Updated: 2025/11/05 14:34:35 by stempels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

/*Includes*/
# include <iostream>

class ClapTrap {
	public:
		/*Constructor-Copy Constructor-Destructor*/
		ClapTrap(std::string name = "dftUnit");
		ClapTrap(const ClapTrap& source);
		virtual ~ClapTrap();

		/*Overloaded Operators*/
		ClapTrap&	operator=(const ClapTrap& source);

		/*Public methods*/
		virtual void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int	amount);

		/*Getter-Setter*/
		std::string	getName() const;
		int			getHp() const;
		int			getMp() const;
		int			getAtk() const;
		void		setHp(int amount);
		void		setMp(int amount);
		void		setAtk(int amount);
		
	protected:
		/*Protected Attributes*/
		std::string	name;
		int			hp;
		int			mp;
		int			atk;
};

#endif
