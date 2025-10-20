/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stempels <stempels@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 10:26:42 by stempels          #+#    #+#             */
/*   Updated: 2025/10/20 10:27:39 by stempels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
}

Zombie::~Zombie(){
	std::cout << zombie.name << std::endl;
}

void	Zombie::annonce(void){
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

Zombie*	Zombie::newZombie(std::string name){
	Zombie	*zombie;

	zombie = new Zombie;
	(*zombie).name = name;
	return (zombie);
}

void	Zombie::randomChump(std::string name){
	Zombie	*zombie;

	zombie = newZombie(name);
	(*zombie).annonce();
	delete zombie;
	zombie = NULL;
	return ;
}
