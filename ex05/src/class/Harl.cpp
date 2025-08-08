
#include "Harl.hpp"

#ifndef HRL_CLR
#define HRL_CLR "\x1b[31:1m"
#endif

#ifndef HRL_CLS
#define HRL_CLS "\033[0m"
#endif

void	Harl::_debug(void)
{
	std::cout << HRL_CLR <<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << HRL_CLS << std::endl;
}

void	Harl::_info(void)
{
	std::cout << HRL_CLR <<"I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << HRL_CLS << std::endl;
}

void	Harl::_warning(void)
{
	std::cout << HRL_CLR <<"I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << HRL_CLS << std::endl;
}

void	Harl::_error(void)
{
	std::cout << HRL_CLR <<"This is unacceptable! I want to speak to the manager now." << HRL_CLS << std::endl;
}

void	Harl::complain(std::string level)
{
	void	(Harl::*ptr[4])() = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	std::string lvlstr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (lvlstr[i] == level)
			(this->*ptr[i])();
	}
}
