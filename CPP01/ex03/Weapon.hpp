/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stempels <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 16:09:11 by stempels          #+#    #+#             */
/*   Updated: 2025/10/23 18:09:36 by stempels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class	Weapon {
	public:
		Weapon(std::string weaponType);
		~Weapon();
		std::string	getType(void) const;
		void	setType(std::string);
	private:
		std::string	type;
};

#endif
