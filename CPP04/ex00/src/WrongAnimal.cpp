/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stempels <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 14:51:08 by stempels          #+#    #+#             */
/*   Updated: 2025/11/05 16:18:52 by stempels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(std::string type) : type(type) {
	std::cout << "WrongAnimal default constructor called" << std::endl;
	std::cout << "Type = " << getType() << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& source) {
	*this = source;
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& source) {
	if (this == &source)
		return (*this);
	type = source.getType();
	return (*this);
}

std::string	WrongAnimal::getType() const {
	return (type);
}

void	WrongAnimal::setType(std::string new_type) {
	type = new_type;
	return ;
}

void	WrongAnimal::makeSound() const {
	std::cout << "Some indistinct noises !" << std::endl;
	return ;
}
