
#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

/*Includes*/
# include <iostream>
# include <string>
# include "AMateria.hpp"

class	IMateriaSource {
	public:
		/*Destructor*/
		virtual	~IMateriaSource() {};

		/*Public Method*/
		virtual void		learnMateria(AMateria* source) = 0;
		virtual AMateria*	createMateria(std::string const& type) = 0;
};

#endif
