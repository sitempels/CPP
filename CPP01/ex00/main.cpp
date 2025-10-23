/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stempels <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 11:38:10 by stempels          #+#    #+#             */
/*   Updated: 2025/10/23 12:08:18 by stempels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	Zombie	zombie("Stack zombie");
	Zombie	*allocZombie;

	zombie.annonce();
	allocZombie = newZombie("Heap zombie");
	allocZombie->annonce();
	randomChump("Stack zombie 2");
	delete(allocZombie);
	return (0);
}
