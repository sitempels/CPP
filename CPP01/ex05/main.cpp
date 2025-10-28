/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stempels <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 16:36:54 by stempels          #+#    #+#             */
/*   Updated: 2025/10/28 15:32:06 by stempels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void) {
	Harl	harl2;
	std::string	level = "INFO";
	harl2.complain(level);
	level = "WARNING";
	harl2.complain(level);
	level = "DEBUG";
	harl2.complain(level);
	level = "ERROR";
	harl2.complain(level);
	level = "TEST";
	harl2.complain(level);
	level = "WARNING";
	harl2.complain(level);
	return (0);
}
