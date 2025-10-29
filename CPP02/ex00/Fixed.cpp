/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stempels <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 17:26:13 by stempels          #+#    #+#             */
/*   Updated: 2025/10/29 17:55:03 by stempels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Fixed constructor called" << std::endl;
}

Fixed::Fixed(const &old_fixed) {
	std::cout << "Fixed copy constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Fixed destructor called" << std::endl;
}

Fixed	operator=(const Fixed &old_fixed) {
	Fixed	new_fixed
	return (fixed);
}

int	Fixed::getRawBits(void) {
	std::cout << "getRawBits member function called" <<std::endl; 
	return (raw_bits);
}

void	setRawBits(int const raw) {
	raw_bits = raw;
	std::cout << "setRawBits member function called" <<std::endl; 
	return ;
}
