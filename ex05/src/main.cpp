#include "Harl.hpp"

int main (void)
{
	int nb_complain = 30;
	Harl	harl;
	std::string lvlstr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	std::string current;

	for (int i = 0; i < nb_complain; i++)
	{
		current = lvlstr[rand() % 4];
		std::cout << std::endl << "[" << i << "]	complain = " << current << std::endl;
		harl.complain(current);
	}

}