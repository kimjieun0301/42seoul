#include "Zombie.hpp"

int	main(void)
{
	Zombie z_stack("Zombie1");
	Zombie *z_heap = newZombie("Zombie2");

	randomChump("Zombie3");
	z_stack.announce();
	z_heap->announce();
	delete z_heap;
	return (0);
}