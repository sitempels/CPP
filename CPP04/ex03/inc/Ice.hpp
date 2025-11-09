
#ifndef ICE_HPP
# define ICE_HPP

/*Includes*/
# include <iostream>
# include <string>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : virtual public AMateria {
	public:
		/*Constructor-Copy Contructor-Destructor*/
		Ice();
		Ice(const Ice& source);
		~Ice();

		/*Overloaded Operators*/
		Ice&	operator=(const Ice& source);

		/*Public Methods*/
		Ice* 	clone() const;
		void	use(ICharacter& target);
};

#endif
