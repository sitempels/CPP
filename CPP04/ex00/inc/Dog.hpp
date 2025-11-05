/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stempels <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 15:23:10 by stempels          #+#    #+#             */
/*   Updated: 2025/11/05 15:52:38 by stempels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

/*Includes*/
# include "Animal.hpp"

class	Dog : public Animal {
	public:
		/*Constructor-Copy Constructor-Destructor*/
		Dog();
		Dog(const Dog& source);
		~Dog();

		/*Overloaded Operators*/
		Dog&	operator=(const Dog& source);

		/*Public Methods*/
		void	makeSound() const ;
};

#endif
