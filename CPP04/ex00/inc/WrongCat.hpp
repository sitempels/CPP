/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stempels <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 15:23:10 by stempels          #+#    #+#             */
/*   Updated: 2025/11/05 16:20:29 by stempels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

/*Includes*/
# include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal {
	public:
		/*Constructor-Copy Constructor-Destructor*/
		WrongCat();
		WrongCat(const WrongCat& source);
		~WrongCat();

		/*Overloaded Operators*/
		WrongCat&	operator=(const WrongCat& source);

		/*Public Methods*/
		void	makeSound() const ;
};

#endif
