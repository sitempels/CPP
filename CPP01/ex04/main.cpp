/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stempels <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 08:57:17 by stempels          #+#    #+#             */
/*   Updated: 2025/10/24 13:07:32 by stempels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "customReplace.hpp"

int	main(int argc, char **argv) {
	if (argc != 4)
		return (1);
	std::string	file1Name = argv[1];
	std::string	file2Name = file1Name + ".replace";
	std::ifstream	file1(file1Name.c_str(), std::ios::in);
	if (!file1.is_open())
		return (1);
	std::ofstream	file2(file2Name.c_str(), std::ios::out);
	if (!file2.is_open()) {
		file1.close();
		return (1);
	}
	customReplace(file1, file2, argv[2], argv[3]);
	return (0);
}
