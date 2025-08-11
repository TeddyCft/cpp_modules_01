
#include "Harl.hpp"

#ifndef HRL_CLR
#define HRL_CLR "\x1b[31:1m"
#endif

#ifndef HRL_CLS
#define HRL_CLS "\033[0m"
#endif

void	Harl::_debug(void)
{
	std::cout << HRL_CLR <<"🐞 I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << HRL_CLS << std::endl;
}

void	Harl::_info(void)
{
	std::cout << HRL_CLR <<"ℹ️  I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << HRL_CLS << std::endl;
}

void	Harl::_warning(void)
{
	std::cout << HRL_CLR <<"⚠️  I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << HRL_CLS << std::endl;
}

void	Harl::_error(void)
{
	std::cout << HRL_CLR <<"❌ This is unacceptable! I want to speak to the manager now." << HRL_CLS << std::endl;
}

void	Harl::complain(std::string level)
{
	int filter = 0;
	std::string lvlstr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	while (level != lvlstr[filter] && filter != 4)
		filter++;
	switch (filter)
	{
		case 0:
			this->_debug();
		case 1:
			this->_info();
		case 2:
			this->_warning();
		case 3:
		{
			this->_error();
			break ;
		}
		default :
		{
			std::cout << HRL_CLR << "[ Probably complaining about insignificant problems ]" << HRL_CLS << std::endl;
			break ;
		}
	}
}
