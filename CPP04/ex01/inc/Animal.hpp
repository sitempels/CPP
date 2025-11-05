/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stempels <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 14:48:27 by stempels          #+#    #+#             */
/*   Updated: 2025/11/05 15:52:17 by stempels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

/*Includes*/
# include <iostream>
# include <string>

class	Animal {
	public:
		/*Constructor-Copy constructor-Destructor*/
		Animal(std::string type = "Animal");
		Animal(const Animal& source);
		virtual ~Animal();

		/*Overloaded Operators*/
		Animal&	operator=(const Animal& source);

		/*Public Member Functions*/
		virtual void	makeSound() const ;
		std::string		getType() const ;
		void			setType(std::string new_type);

	protected:
		/*Protected Attributes*/
		std::string	type;
};

#endif
