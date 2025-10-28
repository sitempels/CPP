/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stempels <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 16:09:10 by stempels          #+#    #+#             */
/*   Updated: 2025/10/28 15:29:57 by stempels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){
}

Harl::~Harl(){
}

void	Harl::complain(std::string entry_level) {
	int			level = 0;
	std::string	level_reference[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	while (level < 4)
	{
		if (!entry_level.compare(level_reference[level]))
			break ;
		level++;
	}
	if (level == 4) {
		std::cout << "\"" << entry_level << "\"" << " is not a know level" << std::endl;
		return ;
	}
	level++;
	switch (level) {
		case 1: //"DEBUG"
			Harl::debug();
		case 2: //"INFO"
			Harl::info();
		case 3: //"WARNING"
			Harl::warning();
		case 4: //"ERROR"
			Harl::error();
			break ;
		default:
			return ;
	}
	return ;
}

void	Harl::debug(void) {
	std::cout << "[DEBUG]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
	return ;
}

void	Harl::info(void) {
	std::cout << "[INFO]\nI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	return ;
}

void	Harl::warning(void) {
	std::cout << "[WARNING]\nI think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
	return ;
}

void	Harl::error(void) {
	std::cout << "[ERROR]\nThis is unacceptable! I want to speak to the manager now." << std::endl;
	return ;
}

