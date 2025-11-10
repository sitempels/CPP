
#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

/*Includes*/
# include <iostream>
# include <string>
# include "AMateria.hpp"

class	AMateria;

class	ICharacter {
	public:
		/*Destructor*/
		virtual	~ICharacter() {};

		/*Public Methods*/
		virtual void	equip(AMateria* m) = 0;
		virtual void	unequip(int idx) = 0;
		virtual	void	use(int idx, ICharacter& target) = 0;

		/*Getter-Setter*/
		virtual std::string const&	getName() const = 0;
		virtual AMateria*	getMateria(int idx) = 0;
};

#endif
