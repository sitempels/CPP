
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"

int	main(void) {
	Ice			ice = Ice();
	Cure		cure = Cure();
	Character	player1 = Character("player1");
	Character	player2 = Character("player2");

	player1.equip(&ice);
	player1.equip(&cure);
	player1.equip(&cure);
	player1.equip(&cure);
	player1.equip(&cure);
	player1.use(0, player2);
	player1.use(1, player1);
	player1.use(2, player1);
	player1.use(3, player1);
	player1.use(4, player1);
	player1.unequip(1);
	player1.equip(&ice);
	player1.use(1, player2);

	return (0);
}
