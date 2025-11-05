/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stempels <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 14:48:27 by stempels          #+#    #+#             */
/*   Updated: 2025/11/05 16:18:23 by stempels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

/*Includes*/
# include <iostream>
# include <string>

class	WrongAnimal {
	public:
		/*Constructor-Copy constructor-Destructor*/
		WrongAnimal(std::string type = "WrongAnimal");
		WrongAnimal(const WrongAnimal& source);
		virtual ~WrongAnimal();

		/*Overloaded Operators*/
		WrongAnimal&	operator=(const WrongAnimal& source);

		/*Public Member Functions*/
		void	makeSound() const ;
		std::string		getType() const ;
		void			setType(std::string new_type);

	protected:
		/*Protected Attributes*/
		std::string	type;
};

#endif
