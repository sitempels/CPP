/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stempels <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 16:09:10 by stempels          #+#    #+#             */
/*   Updated: 2025/10/24 16:56:42 by stempels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

LevelCode	hashLevel(const std::string level) {
	if (level == DEBUG)
		return (HarlLevel::debug);
	if (level == INFO)
		return (HarlLevel::info);
	if (level == WARNING)
		return (HarlLevel::warning);
	if (level == ERROR)
		return (HarlLevel::error);
}

void	Harl::complain(std::string level) {
	switch (level) {
		case "DEBUG":
			Harl::complain_level = &Harl::debug;
		case "INFO":
			Harl::complain_level = &Harl::info;
		case "WARNING":
			Harl::complain_level = &Harl::warning;
		case "ERROR":
			Harl::complain_level = &Harl::error;
		default:
			std::cout << "No know level of that type\n" << std::endl;
			return ;
	}
	(*complain_level)();
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

