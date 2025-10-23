/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stempels <stempels@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 08:09:02 by stempels          #+#    #+#             */
/*   Updated: 2025/10/23 12:04:41 by stempels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class	Zombie {
	/*___Constructor_____*/
	public :
		Zombie(std::string zombieName);
	/*___Data members____*/
	private:
		std::string name;
	/*___Function member_*/
	public:
	void	annonce(void);
	static Zombie*	newZombie(std::string name);
	void	randomChump(std::string name);
	/*___Destructor______*/
	public:
		~Zombie();
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif
