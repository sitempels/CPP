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
	name = source.name;
	for (int i = 0; i < MAX_MATERIA; i++) {
		if (source.inventory[i] == NULL)
			inventory[i] = NULL;
		else
			inventory[i] = source.inventory[i]->clone();
	}
}

/*Destructor*/
Character::~Character() {
		std::cout << "Destructor called: Character" << std::endl;
	for (int i = 0; i < MAX_MATERIA; i++) {
		if (inventory[i])
			delete(inventory[i]);
	}
}

/*Overloaded Operators*/
Character&	Character::operator=(const Character& source) {
	name = source.name;
	if (this != &source) {
		for (int i = 0; i < MAX_MATERIA; i++) {
			if (inventory[i])
				delete(inventory[i]);
			if (source.inventory[i] == NULL)
				inventory[i] = NULL;
			else
				inventory[i] = source.inventory[i]->clone();
			inventory[i] = source.inventory[i];
		}
	}
	return (*this);
}

/*Public Methods*/
void	Character::equip(AMateria* m) {
	int	i = 0;
	while (inventory[i])
		i++;
	if (i == MAX_MATERIA) {
		std::cout << "Inventory full, please unequip first" << std::endl;
		delete(m);
	}
	else {
		inventory[i] = m;
		std::cout << m->getType() << " Materia equiped in slot "
					<< i + 1 << std::endl;
	}
	return ;
}

void	Character::unequip(int idx) {
	if (-1 < idx && idx < MAX_MATERIA && inventory[idx]) {
		std::cout << inventory[idx]->getType() << " Materia unequiped in slot "
					<< idx + 1 << std::endl;
		inventory[idx] = NULL;
	}
	else
		std::cout << "Nothing equiped there" << std::endl;
	return ;
}

void	Character::use(int idx, ICharacter& target) {
	if (-1 < idx && idx < MAX_MATERIA && inventory[idx]) {
		std::cout << getName() + " ";
		inventory[idx]->use(target);
	}
	return ;
}

/*Getter*/
std::string const&	Character::getName() const {
	return (name);
}

AMateria*	Character::getMateria(int idx) {
	if (-1 < idx && idx < MAX_MATERIA)
		return (inventory[idx]);
	return (NULL);
}
