#include <iostream>
#include "Zombie.hpp"

Zombie*newZombie(std::string name)
{
	Zombie new = name;
	return (&new);
}

void	randomChump(std::string name)
{
	Zombie new = name;
	Zombie::announce(new.name);
}