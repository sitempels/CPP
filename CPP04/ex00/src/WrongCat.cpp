/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stempels <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 15:27:18 by stempels          #+#    #+#             */
/*   Updated: 2025/11/05 16:21:40 by stempels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("Dog") {
	std::cout << "WrongCat default constructor called" << std::endl;
	std::cout << "Type = " << getType() << std::endl;
}

WrongCat::WrongCat(const WrongCat& source) {
	*this = source;
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat& source) {
	if (this == &source)
		return (*this);
	type = source.getType();
	return (*this);
}

void	WrongCat::makeSound() const {
	std::cout << "WOOF ! WoOOooOF !" <<std::endl;
	return ;
}
