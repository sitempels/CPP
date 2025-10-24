/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   customReplace.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stempels <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 12:55:41 by stempels          #+#    #+#             */
/*   Updated: 2025/10/24 13:07:59 by stempels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "customReplace.hpp"

void	customReplace(std::ifstream &file1, std::ofstream &file2, std::string target, std::string replace) {
	size_t	pos = 0;
	std::string	str;

	while (std::getline (file1, str)) {
		while ((pos = str.find(target, pos)) <= str.max_size()) {
			str.erase(pos, target.size());
			str.insert(pos, replace);
		}
		file2 << str << std::endl;
	}
	return ;
}
