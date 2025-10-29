/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stempels <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 15:37:39 by stempels          #+#    #+#             */
/*   Updated: 2025/10/29 17:36:51 by stempels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

/*Include*/
#include <iostream>

class Fixed	{
	public:
	/*Constructor-Copy Constructor-Destructor*/
		Fixed() : frac_bit(8);
		Fixed(const &old_fixed);
		~Fixed();
	/*Assignement Operator*/
		Fixed	operator=(const Fixed &old_fixed);
	/*Member function*/
		int		getRawBits(void);
		void	setRawBits(int const raw);
	private:
	/*truc*/
		int					raw_bits;
		static const int	frac_bit;
};

#endif
