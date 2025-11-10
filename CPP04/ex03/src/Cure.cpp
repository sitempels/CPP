
#include "Cure.hpp"

Cure::Cure()
	: AMateria("cure") {
		std::cout << "Constructor called: Cure" << std::endl;
}

Cure::Cure(const Cure& copy_from)
	: AMateria(copy_from) {
	*this = copy_from;
	std::cout << "Copy Constructor called: Cure" << std::endl;
}

Cure::~Cure() {
	std::cout << "Destructor called: Cure" << std::endl;
}

Cure&	Cure::operator=(const Cure& source) {
	if (this != &source)
		type = source.type;
	return (*this);
}

Cure*	Cure::clone() const {
	return (new Cure());
}

void	Cure::use(ICharacter& target) {
	std::cout << "* heal's " + target.getName() << "'s wounds *"<< std::endl;
	return ;
}
