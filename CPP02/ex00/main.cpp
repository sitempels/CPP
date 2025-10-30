/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stempels <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 17:33:43 by stempels          #+#    #+#             */
/*   Updated: 2025/10/30 15:04:58 by stempels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void) {
	Fixed	a;
	std::cout << "---	a constructed	---" << std::endl;
	Fixed	b(a);
	std::cout << "---	b constructed	---" << std::endl;
	Fixed	c;
	std::cout << "---	c constructed	---" << std::endl;

	c = b;
	std::cout << "---	c copied	---" << std::endl;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return (0);
}
