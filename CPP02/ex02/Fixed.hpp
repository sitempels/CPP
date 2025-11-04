/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stempels <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 15:37:39 by stempels          #+#    #+#             */
/*   Updated: 2025/11/04 08:29:54 by stempels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

/*Include*/
#include <iostream>
#include <cmath>

class Fixed	{
	public:
	/*Constructor-Copy Constructor-Destructor*/
		Fixed();
		Fixed(const int input);
		Fixed(const float input);
		Fixed(const Fixed& source);
		~Fixed();
		 
	/*Overloaded Operators*/
		Fixed&	operator=(const Fixed& source);

		bool	operator>(Fixed fixed) const;
		bool	operator<(Fixed fixed) const;
		bool	operator>=(Fixed fixed) const;
		bool	operator<=(Fixed fixed) const;
		bool	operator==(Fixed fixed) const;
		bool	operator!=(Fixed fixed) const;

		float	operator+(Fixed fixed) const;
		float	operator-(Fixed fixed) const;
		float	operator*(Fixed fixed) const;
		float	operator/(Fixed fixed) const;

		Fixed	operator++();
		Fixed	operator++(int);
		Fixed	operator--();
		Fixed	operator--(int);

	/*Public Methods*/
		float	toFloat(void) const;
		int		toInt(void) const;
		static Fixed	&min(Fixed& first, Fixed& second);
		static const Fixed	&min(const Fixed& first, const Fixed& second);
		static Fixed	&max(Fixed& first, Fixed& second);
		static const Fixed	&max(const Fixed& first, const Fixed& second);
	/*Getter - Setter*/
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
	private:
	/*Private Attributes*/
		int					raw_bits;
		static const int	frac_bit = 8;
};

std::ostream&	operator<<(std::ostream& ostream, const Fixed& source);

#endif
