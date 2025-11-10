
#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"

int	main(void) {
	IMateriaSource	*materia_source = new MateriaSource();
	materia_source->learnMateria(new Ice());
	materia_source->learnMateria(new Cure());

	ICharacter	*player1 = new Character("Kevin");
	AMateria	*tmp;
	tmp = materia_source->createMateria("ice");
	player1->equip(tmp);
	tmp = materia_source->createMateria("cure");
	player1->equip(tmp);
	tmp = materia_source->createMateria("cure");
	player1->equip(tmp);
	tmp = materia_source->createMateria("cure");
	player1->equip(tmp);
	tmp = materia_source->createMateria("cure");
	player1->equip(tmp);

	ICharacter	*player2 = new Character("Brenda");
	player1->use(0, *player2);
	player1->use(1, *player2);
	player1->use(2, *player2);
	player1->use(3, *player2);
	player1->use(4, *player2);

	tmp = player1->getMateria(0); 
	player1->unequip(0);
	delete(tmp);
	tmp = materia_source->createMateria("cure");
	player1->equip(tmp);
	player1->use(0, *player2);
	player1->use(1, *player2);

	delete(player1);
	delete(player2);
	delete(materia_source);
	return (0);
}
