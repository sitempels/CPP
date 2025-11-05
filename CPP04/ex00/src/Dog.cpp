/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stempels <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 15:27:18 by stempels          #+#    #+#             */
/*   Updated: 2025/11/05 15:53:21 by stempels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << "Dog default constructor called" << std::endl;
	std::cout << "Type = " << getType() << std::endl;
}

Dog::Dog(const Dog& source) {
	*this = source;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
}

Dog&	Dog::operator=(const Dog& source) {
	if (this == &source)
		return (*this);
	type = source.getType();
	return (*this);
}

void	Dog::makeSound() const {
	std::cout << "WOOF ! WoOOooOF !" <<std::endl;
	return ;
}
