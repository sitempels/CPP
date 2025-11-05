/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stempels <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 15:35:34 by stempels          #+#    #+#             */
/*   Updated: 2025/11/05 19:20:27 by stempels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int	main(void) {
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	j->setIdeas(0, "RUUUUUN !!!");
	i->setIdeas(0, "Sleeeeppp");

	std::cout << i->getType() + ": " + i->brain.ideas[0] << "\t" << j->brain.ideas[0] << std::endl;

	delete j;//should not create a leak
	delete i;
	return (0);
}
