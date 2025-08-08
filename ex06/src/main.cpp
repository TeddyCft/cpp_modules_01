#include "Harl.hpp"

int arg_check(int ac, char **av, std::string lvlstr[4])
{
	if (ac != 2)
		return (std::cerr << "error : bad argument count" << std::endl, 1);
	for (int i = 0; i < 4; i++)
	{
		if (av[1] == lvlstr[i])
			break;
		if (i == 3)
			return (std::cout << "[ Probably complaining about insignificant problems ]" << std::endl, 1);
	}
	return (0);
}

int main (int ac, char **av)
{
	Harl	harl;
	std::string lvlstr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int filter = 0;

	if (arg_check(ac, av, lvlstr))
		return (1);
	
	//get the filter level
	while (av[1] != lvlstr[filter])
		filter++;
	harl.listen(lvlstr, filter);
	return (0);
}