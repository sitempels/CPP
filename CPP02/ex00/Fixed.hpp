/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stempels <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 15:37:39 by stempels          #+#    #+#             */
/*   Updated: 2025/10/30 15:00:00 by stempels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

/*Include*/
#include <iostream>

class Fixed	{
	public:
	/*Constructor-Copy Constructor-Destructor*/
		Fixed();
		Fixed(const Fixed& source);
		~Fixed();
	/*Assignement Operator*/
		Fixed&	operator=(const Fixed& source);
	/*Function*/
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
	private:
	/*Attributes*/
		int					raw_bits;
		static const int	frac_bit = 8;
};

#endif
