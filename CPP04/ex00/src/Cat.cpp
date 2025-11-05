/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stempels <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 15:27:18 by stempels          #+#    #+#             */
/*   Updated: 2025/11/05 15:53:10 by stempels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	std::cout << "Cat default constructor called" << std::endl;
	std::cout << "Type = " << getType() << std::endl;
}

Cat::Cat(const Cat& source) {
	*this = source;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
}

Cat&	Cat::operator=(const Cat& source) {
	if (this == &source)
		return (*this);
	type = source.getType();
	return (*this);
}

void	Cat::makeSound() const {
	std::cout << "Miaou ! Miaou ! Miaou !" <<std::endl;
	return ;
}
