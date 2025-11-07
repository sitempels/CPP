/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stempels <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 15:27:18 by stempels          #+#    #+#             */
/*   Updated: 2025/11/07 12:45:59 by stempels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	brain = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
	std::cout << "Type = " << getType() << std::endl;
}

Dog::Dog(const Dog& source) : Animal() {
	*this = source;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog() {
	delete(brain);
	std::cout << "Dog destructor called" << std::endl;
}

Dog&	Dog::operator=(const Dog& source) {
	if (this == &source)
		return (*this);
	type = source.getType();
	delete(brain);
	brain = new Brain();
	*brain = *(source.brain);
	return (*this);
}

void	Dog::makeSound() const {
	std::cout << "WOOF ! WoOOooOF !" <<std::endl;
	return ;
}

Brain*	Dog::getBrain() const {
	return (brain);
}
