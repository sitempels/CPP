
#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

/*Includes*/
# include <iostream>
# include <string>
# include "AMateria.hpp"
# include "IMateriaSource.hpp"

/*Macros*/
# define MAX_RECIPES 4

class	MateriaSource : virtual public IMateriaSource {
	public:
		/*Constructor-Copy Constructor-Destructor*/
		MateriaSource();
		MateriaSource(const MateriaSource& copy_from);
		~MateriaSource();

		/*Overloaded Operator*/
		MateriaSource&	operator=(const MateriaSource& source);

		/*Public Method*/
		void		learnMateria(AMateria* source) ;
		AMateria	*createMateria(std::string const& type) ;

	private:
		/*Private Attribute*/
		AMateria	*recipes[MAX_RECIPES];
};

#endif
