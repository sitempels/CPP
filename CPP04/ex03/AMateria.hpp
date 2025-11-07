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

#ifndef ICE_HPP
# define ICE_HPP

/*Includes*/
# include <iostream>
# include <string>
# include "AMateria"

class Ice {
	public:
		/*Constructor-Copy Contructor-Destructor*/
		Ice(std::string const& type);
		Ice(const Ice& source);
		virtual	~Ice();

		/*Overloaded Operators*/
		Ice&	operator=(const Ice& source);

		/*Public Methods*/
		Ice* 	clone() const;
		virtual void		use(ICharacter& target);

		/*Getter-Setter*/
		std::string const&	getType() const;

};

#endif

#ifndef CURE_HPP
# define CURE_HPP

/*Includes*/
# include <iostream>
# include <string>
# include "AMateria"

class Cure {
	public:
		/*Constructor-Copy Contructor-Destructor*/
		Cure(std::string const& type);
		Cure(const Cure& source);
		virtual	~Cure();

		/*Overloaded Operators*/
		Cure&	operator=(const Cure& source);

		/*Public Methods*/
		Cure* 	clone() const ;
		virtual void		use(ICharacter& target);

		/*Getter-Setter*/
		std::string const&	getType() const;

};

#endif

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

/*Includes*/
# include <iostream>
# include <string>
# include "AMateria"

class ICharacter {
	public:
		/*Public Methods*/
		virtual std::string const&	getName() const = 0;
		virtual void	equip(AMateria* m) = 0;
		virtual void	unequipe(int idx) = 0;
		virtual	void	use(int idx, ICharater& target) = 0;
};

#endif

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

/*Includes*/
# include <iostream>
# include <string>
# include "AMateria"
# include "ICharacter"

class Character : ICharacter{
	public:
		/*Constructor-Copy Contructor-Destructor*/
		Character(const std::string& name = "Default Character");
		Character(const Character& source);
		virtual	~Character();

		/*Overloaded Operators*/
		Character&	operator=(const Character& source);
		
		/*Public Methods*/
		std::string const&	getName() const ;
		void	equip(AMateria* m) ;
		void	unequipe(int idx) ;
		void	use(int idx, ICharater& target) ;

	private:
		/*Private Attributes*/
		const std::string	name;
		Materia				inventory[4];
};

#endif
