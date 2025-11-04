/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stempels <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 17:33:43 by stempels          #+#    #+#             */
/*   Updated: 2025/11/04 09:15:37 by stempels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void) {
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << "a is " << a << " at start" << std::endl;
	std::cout << "a is " << ++a << " at ++a" << std::endl;
	std::cout << "a is " << a << " after ++a" << std::endl;
	std::cout << "a is " << --a << " at --a" << std::endl;
	std::cout << "a is " << a << " after --a" << std::endl;
	std::cout << "a is " << a++ << " at a++" << std::endl;
	std::cout << "a is " << a << " after a++" << std::endl;
	std::cout << "a is " << a-- << " at a--" << std::endl;
	std::cout << "a is " << a << " after a--\n" << std::endl;

	a = 3;
	std::cout << "a value of " << a << std::endl;
	std::cout << "b value of " << b << std::endl;
	std::cout << "the max of a and b is " << Fixed::max(a, b) << std::endl;
	std::cout << "the min of a and b is " << Fixed::min(a, b) << "\n" << std::endl;

	std::cout << "a + b is " << a + b << std::endl;
	std::cout << "a - b is " << a - b << std::endl;
	std::cout << "a * b is " << a * b << std::endl;
	std::cout << "a / b is " << a / b << "\n" << std::endl;
	return (0);
}
