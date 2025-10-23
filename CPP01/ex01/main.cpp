/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stempels <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 11:38:10 by stempels          #+#    #+#             */
/*   Updated: 2025/10/23 14:42:28 by stempels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	int		N = 8;
	Zombie	*horde = zombieHorde(N, "Walker");

	for (int i = 0; i < N; i++)
		horde[i].annonce();
	delete[](horde);
	return (0);
}
