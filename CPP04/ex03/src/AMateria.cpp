
#include "AMateria.hpp"

/*Constructor*/
AMateria::AMateria(std::string const& type)
	:	type(type) {
		std::cout << "Constructor called: AMateria" << std::endl;
}

/*Copy Contructor*/
AMateria::AMateria(const AMateria& copy_from) {
	type = copy_from.type;
	std::cout << "Copy Constructor called: AMateria" << std::endl;
}

/*Destructor*/
AMateria::~AMateria() {
	std::cout << "Destructor called: AMateria" << std::endl;
}


/*Overloaded Operators*/
AMateria&	AMateria::operator=(const AMateria& source) {
	if (this != &source)
		type = source.type;
	return (*this);
}

/*Public Methods*/
void	AMateria::use(ICharacter& target) {
	std::cout << "Use something on " << target.getName() << std::endl;
	return ;
}

/*Getter-Setter*/
std::string const&	AMateria::getType() const {
	return (type);
}
