/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stempels <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 13:40:45 by stempels          #+#    #+#             */
/*   Updated: 2025/11/07 14:48:37 by stempels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

/*Includes*/
# include <iostream>
# include <string>
# include "ICharacter.hpp"

class AMateria {
	public:
		/*Constructor-Copy Contructor-Destructor*/
		AMateria(std::string const& type = "Default");
		AMateria(const AMateria& source);
		virtual	~AMateria();

		/*Overloaded Operators*/
		AMateria&	operator=(const AMateria& source);

		/*Public Methods*/
		virtual AMateria* 	clone() const = 0;
		virtual void		use(ICharacter& target);

		/*Getter-Setter*/
		std::string const&	getType() const;

	protected:
		/*Protected Attributes*/
		std::string	type;
};

#endif
