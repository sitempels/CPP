
#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	std::cout << "Constructor called: MateriaSource" << std::endl;
	for (int i = 0; i < MAX_RECIPES; i++)
		recipes[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& copy_from)
	: IMateriaSource() {
	std::cout << "Copy Constructor called: MateriaSource" << std::endl;
	for (int i = 0; i < MAX_RECIPES; i++) {
		if (!copy_from.recipes[i])
			recipes[i] = NULL;
		else
			recipes[i] = copy_from.recipes[i]->clone();
	}
}

MateriaSource::~MateriaSource() {
	std::cout << "Destructor called: MateriaSource" << std::endl;
	for (int i = 0; i < MAX_RECIPES; i++) {
		if (recipes[i])
			delete(recipes[i]);
	}
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& source) {
	std::cout << "Copy Constructor called: MateriaSource" << std::endl;
	for (int i = 0; i < MAX_RECIPES; i++) {
		if (recipes[i])
			delete(recipes[i]);
		if (!source.recipes[i])
			recipes[i] = NULL;
		else
			recipes[i] = source.recipes[i]->clone();
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *materia) {
	int	i = 0;
	while (recipes[i])
		i++;
	if (i == MAX_RECIPES)
		std::cout << "Maximum Materia recipes learned" << std::endl;
	else {
		std::cout << materia->getType() << " Materia learned" << std::endl;
		recipes[i] = materia;
	}
	return ;
}

AMateria*	MateriaSource::createMateria(const std::string& type) {
	int	i = 0;
	while (recipes[i]) {
		if (!recipes[i]->getType().compare(type)) {
			std::cout << recipes[i]->getType() << " Materia created" << std::endl;
			return (recipes[i]->clone());
		}
		i++;
	}
	return (NULL);
}
