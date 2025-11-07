/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stempels <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 15:27:18 by stempels          #+#    #+#             */
/*   Updated: 2025/11/05 19:09:52 by stempels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain& source) {
	*this = source;
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain::~Brain() {
	std::cout << "Brain destructor called" << std::endl;
}

Brain&	Brain::operator=(const Brain& source) {
	if (this == &source)
		return (*this);
	for (int i = 0; i < 100; i++)
		ideas[i] = source.ideas[i];
	return (*this);
}

std::string Brain::getIdeas(int pos) const {
	return (ideas[pos]);
}

void	Brain::setIdeas(int pos, std::string idea) {
	ideas[pos] = idea;
	return ;
}
