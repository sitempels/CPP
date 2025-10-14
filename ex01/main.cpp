/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stempels <stempels@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:39:30 by stempels          #+#    #+#             */
/*   Updated: 2025/10/14 13:27:19 by stempels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main() {
	PhoneBook	test;
	std::string	str;

	while (1) {
		std::cout << "Enter a command(ADD, SEARCH, EXIT): ";
		str = test.readcin();
		std::cout <<std::endl;
		if (!str.compare("ADD")) {
			test.add();
		}
		else if (!str.compare("SEARCH")) {
			test.search();
		}
		else if (!str.compare("EXIT")) {
				break ;
		}
		else {
			std::cout << "Invalid option\n"
				<< "Valid options are:\n"
				<< "\tADD: add a new contact.\n"
				<< "\tSEARCH: display saved contact.\n"
				<< "\tEXIT: exit the program.\n" << std::endl;
		}
	}
	return (0);
}
