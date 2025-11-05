/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stempels <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 15:23:10 by stempels          #+#    #+#             */
/*   Updated: 2025/11/05 18:27:04 by stempels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

/*Includes*/
# include "Animal.hpp"
# include "Brain.hpp"

class	Cat : public Animal {
	public:
		/*Constructor-Copy Constructor-Destructor*/
		Cat();
		Cat(const Cat& source);
		~Cat();

		/*Overloaded Operators*/
		Cat&	operator=(const Cat& source);

		/*Public Methods*/
		void	makeSound() const ;

	private:
		Brain	*brain;
};

#endif
