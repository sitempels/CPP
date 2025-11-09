
#ifndef CURE_HPP
# define CURE_HPP

/*Includes*/
# include <iostream>
# include <string>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : virtual public AMateria {
	public:
		/*Constructor-Copy Contructor-Destructor*/
		Cure();
		Cure(const Cure& source);
		~Cure();

		/*Overloaded Operators*/
		Cure&	operator=(const Cure& source);

		/*Public Methods*/
		Cure* 	clone() const ;
		void	use(ICharacter& target);
};

#endif
