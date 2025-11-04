/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stempels <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 17:26:13 by stempels          #+#    #+#             */
/*   Updated: 2025/11/04 08:19:51 by stempels         ###   ########.fr       */
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

Fixed::Fixed(const int input) {
	std::cout << "Fixed: Int constructor called" << std::endl;
	raw_bits = input << frac_bit;
}

Fixed::Fixed(const float input) {
	std::cout << "Fixed: Float constructor called" << std::endl;
	raw_bits = roundf(input * (1 << frac_bit));
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

float	Fixed::toFloat(void) const {
	return (static_cast<float>(raw_bits) / static_cast<float>(1 << frac_bit));
}

int		Fixed::toInt(void) const {
	return (raw_bits >> frac_bit);
}

std::ostream&	operator<<(std::ostream& ostream, const Fixed& source) {
	ostream << source.toFloat();
	return (ostream);
}
