/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stempels <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 17:26:13 by stempels          #+#    #+#             */
/*   Updated: 2025/11/04 09:09:45 by stempels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : raw_bits(0) {
}

Fixed::Fixed(const Fixed& source) {

	*this = source; 
	//raw_bits = source.raw_bits;
}

Fixed::Fixed(const int input) {
	raw_bits = input << frac_bit;
}

Fixed::Fixed(const float input) {
	raw_bits = roundf(input * (1 << frac_bit));
}

Fixed::~Fixed() {
}

Fixed&	Fixed::operator=(const Fixed& source) {
	if (this == &source)
		return (*this);
	raw_bits = source.getRawBits();
	return (*this);
}

bool	Fixed::operator>(Fixed input) const {
	return (raw_bits > input.raw_bits);
}

bool	Fixed::operator<(Fixed input) const {
	return (raw_bits < input.raw_bits);
}

bool	Fixed::operator>=(Fixed input) const {
	return (raw_bits >= input.raw_bits);
}

bool	Fixed::operator<=(Fixed input) const {
	return (raw_bits <= input.raw_bits);
}

bool	Fixed::operator==(Fixed input) const {
	return (raw_bits == input.raw_bits);
}

bool	Fixed::operator!=(Fixed input) const {
	return (raw_bits != input.raw_bits);
}

float	Fixed::operator+(Fixed input) const {
	return (toFloat() + input.toFloat());
}

float	Fixed::operator-(Fixed input) const {
	return (toFloat() - input.toFloat());
}

float	Fixed::operator*(Fixed input) const {
	return (toFloat() * input.toFloat());
}

float	Fixed::operator/(Fixed input) const {
	return (toFloat() / input.toFloat());
}

Fixed	Fixed::operator++() {
	this->raw_bits++;
	return (*this);
}

Fixed	Fixed::operator++(int) {
	Fixed	tmp = *this;
	++this->raw_bits;
	return (tmp);
}

Fixed	Fixed::operator--() {
	this->raw_bits--;
	return (*this);
}

Fixed	Fixed::operator--(int) {
	Fixed	tmp = *this;
	--this->raw_bits;
	return (tmp);
}

int	Fixed::getRawBits(void) const {
	return (raw_bits);
}

void	Fixed::setRawBits(int const raw) {
	raw_bits = raw;
	return ;
}

float	Fixed::toFloat(void) const {
	return (static_cast<float>(raw_bits) / static_cast<float>(1 << frac_bit));
}

int		Fixed::toInt(void) const {
	return (raw_bits >> frac_bit);
}

Fixed&	Fixed::min(Fixed& first, Fixed& second) {
	if (first.raw_bits <= second.raw_bits)
		return (first);
	else
		return (second);
}

const Fixed&	Fixed::min(const Fixed& first, const Fixed& second) {
	if (first.raw_bits <= second.raw_bits)
		return (first);
	else
		return (second);
}

Fixed&	Fixed::max(Fixed& first, Fixed& second) {
	if (first.raw_bits >= second.raw_bits)
		return (first);
	else
		return (second);
}

const Fixed&	Fixed::max(const Fixed& first, const Fixed& second) {
	if (first.raw_bits >= second.raw_bits)
		return (first);
	else
		return (second);
}


std::ostream&	operator<<(std::ostream& ostream, const Fixed& source) {
	ostream << source.toFloat();
	return (ostream);
}
