/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stempels <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 15:27:18 by stempels          #+#    #+#             */
/*   Updated: 2025/11/07 12:46:14 by stempels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	brain = new Brain();
	std::cout << "Cat default constructor called" << std::endl;
	std::cout << "Type = " << getType() << std::endl;
}

Cat::Cat(const Cat& source) : Animal() {
	*this = source;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat() {
	delete(brain);
	std::cout << "Cat destructor called" << std::endl;
}

Cat&	Cat::operator=(const Cat& source) {
	if (this == &source)
		return (*this);
	type = source.getType();
	delete(brain);
	brain = new Brain();
	*brain = *(source.brain);
	return (*this);
}

void	Cat::makeSound() const {
	std::cout << "Miaou ! Miaou ! Miaou !" <<std::endl;
	return ;
}

Brain*	Cat::getBrain() const {
	return (brain);
}
