/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stempels <stempels@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 08:09:02 by stempels          #+#    #+#             */
/*   Updated: 2025/10/23 13:49:56 by stempels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class	Zombie {
	public :
		Zombie();
		~Zombie();

		void	annonce(void);
		void	setName(std::string name);
	
	private:
		std::string name;
};

Zombie	*zombieHorde(int N, std::string name);
#endif
