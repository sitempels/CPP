/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stempels <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 14:51:08 by stempels          #+#    #+#             */
/*   Updated: 2025/11/05 15:52:58 by stempels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(std::string type) : type(type) {
	std::cout << "Animal default constructor called" << std::endl;
	std::cout << "Type = " << getType() << std::endl;
}

Animal::Animal(const Animal& source) {
	*this = source;
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

Animal&	Animal::operator=(const Animal& source) {
	if (this == &source)
		return (*this);
	type = source.getType();
	return (*this);
}

std::string	Animal::getType() const {
	return (type);
}

void	Animal::setType(std::string new_type) {
	type = new_type;
	return ;
}

void	Animal::makeSound() const {
	std::cout << "Some indistinct noises !" << std::endl;
	return ;
}
