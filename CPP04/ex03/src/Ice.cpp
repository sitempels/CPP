
#include "Ice.hpp"

Ice::Ice()
	: AMateria("ice") {
		std::cout << "Constructor called: Ice" << std::endl;
}

Ice::Ice(const Ice& copy_from)
	: AMateria(copy_from) {
	*this = copy_from;
	std::cout << "Copy Constructor called: Ice" << std::endl;
}

Ice::~Ice() {
	std::cout << "Destructor called: Ice" << std::endl;
}

Ice&	Ice::operator=(const Ice& source) {
	if (this == &source)
		return (*this);
	*this = source;
	return (*this);
}

Ice*	Ice::clone() const {
	Ice	*new_ice = new Ice(*this);
//	*new_ice = *this;
	return (new_ice);
}

void	Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " + target.getName() << " *"<< std::endl;
	return ;
}
