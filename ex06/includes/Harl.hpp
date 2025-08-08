#ifndef HARL_HPP
#define HARL_HPP

# include <iostream>
# include <string>
# include <cstdlib>

class	Harl
{
	public :

	void	complain(std::string level);
	void	listen(std::string lvlstr[4], int filter);
	Harl(void){}
	~Harl(void){}

	private :
	void	_debug(void);
	void	_info(void);
	void	_warning(void);
	void	_error(void);
}	;

#endif