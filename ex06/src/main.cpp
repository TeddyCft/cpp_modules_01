#include "Harl.hpp"

int main (int ac, char **av)
{
	Harl	harl;
	std::string lvlstr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	if (ac != 2)
		return (std::cerr << "error : bad argument count" << std::endl, 1);
	harl.complain(av[1]);
	return (0);
}