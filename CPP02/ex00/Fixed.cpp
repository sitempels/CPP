/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stempels <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 17:26:13 by stempels          #+#    #+#             */
/*   Updated: 2025/10/30 15:05:44 by stempels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : raw_bits(0) {
	std::cout << "Fixed: Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& source) {
	std::cout << "Fixed: Copy constructor called" << std::endl;

	*this = source; 
	//raw_bits = source.raw_bits;
}

Fixed::~Fixed() {
	std::cout << "Fixed: Destructor called" << std::endl;
}

Fixed&	Fixed::operator=(const Fixed& source) {
	std::cout << "Fixed: Copy assignement called" << std::endl;
	if (this == &source)
		return (*this);
	raw_bits = source.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const {
	std::cout << "Fixed: getRawBits member function called" <<std::endl; 
	return (raw_bits);
}

void	Fixed::setRawBits(int const raw) {
	raw_bits = raw;
	std::cout << "Fixed: setRawBits member function called" <<std::endl; 
	return ;
}
