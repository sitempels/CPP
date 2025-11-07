/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stempels <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 14:43:17 by stempels          #+#    #+#             */
/*   Updated: 2025/11/07 14:49:47 by stempels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(const std::string& name) : ICharacter(), name(name) {
	std::cout << "Constructor called: Character" << std::endl;
}

Character::Character(const Character& source) : ICharacter() {
	std::cout << "Copy Constructor called: Character" << std::endl;
}

