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

/*Constructor*/
Character::Character(const std::string name)
	: ICharacter(), name(name) {
		std::cout << "Constructor called: Character" << std::endl;
	for (int i = 0; i < MAX_MATERIA; i++) {
		inventory[i] = NULL;
	}
}

/*Copy Constructor*/
Character::Character(const Character& source)
	: ICharacter() {
		std::cout << "Copy Constructor called: Character" << std::endl;
	*this = source;
}

/*Destructor*/
Character::~Character() {
		std::cout << "Destructor called: Character" << std::endl;
}

/*Overloaded Operators*/
Character&	Character::operator=(const Character& source) {
	if (this == &source)
		return (*this);
	for (int i = 0; i < MAX_MATERIA; i++)
		inventory[i] = source.inventory[i];
	return (*this);
}

/*Public Methods*/
void	Character::equip(AMateria* m) {
	int	i = 0;
	while (inventory[i])
		i++;
	if (i == MAX_MATERIA)
		std::cout << "Inventory full, please unequip first" << std::endl;
	else {
		inventory[i] = m;
		std::cout << m->getType() << " Materia equiped in slot "
					<< i + 1 << std::endl;
	}
	return ;
}

void	Character::unequip(int idx) {
	std::cout << inventory[idx]->getType() << " Materia unequiped in slot "
				<< idx + 1 << std::endl;
	inventory[idx] = NULL;
	return ;
}

void	Character::use(int idx, ICharacter& target) {
	if (idx < MAX_MATERIA) {
		std::cout << getName() + " ";
		inventory[idx]->use(target);
	}
	return ;
}

/*Getter*/
std::string const&	Character::getName() const {
	return (name);
}
