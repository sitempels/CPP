/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stempels <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 15:35:34 by stempels          #+#    #+#             */
/*   Updated: 2025/11/07 13:21:23 by stempels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int	main(void) {
//	Animal	Show_that_doesnt_work;
	const int		nbr_animals = 10;
	const Animal*	animals[nbr_animals];


	for (int i = 0; i < nbr_animals; i++) {
		if (i % 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
//		std::cout << animals[i]->getBrain()->getIdeas(0) << std::endl;
		animals[i]->getBrain()->setIdeas(0, "Idea " + animals[i]->getType() + static_cast<char>(i + 48));
	}

	for (int i = 0; i < nbr_animals; i++) {
		animals[i]->makeSound();
		std::cout << animals[i]->getBrain()->getIdeas(0) << std::endl;
	}

	for (int i = 0; i < nbr_animals; i++) {
		delete animals[i];
	}
	return (0);
}
