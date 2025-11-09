
#ifndef CHARACTER_HPP
# define CHARACTER_HPP

/*Includes*/
# include <iostream>
# include <string>
# include "AMateria.hpp"
# include "ICharacter.hpp"

/*Macros*/
# define MAX_MATERIA 4

class Character : virtual public ICharacter {
	public:
		/*Constructor-Copy Contructor-Destructor*/
		Character(const std::string name = "Default Character");
		Character(const Character& source);
		~Character();

		/*Overloaded Operators*/
		Character&	operator=(const Character& source);
		
		/*Public Methods*/
		std::string const&	getName() const ;
		void	equip(AMateria* m) ;
		void	unequip(int idx) ;
		void	use(int idx, ICharacter& target) ;

	private:
		/*Private Attributes*/
		const std::string	name;
		AMateria			*inventory[MAX_MATERIA];
};

#endif
