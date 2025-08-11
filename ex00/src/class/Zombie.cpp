/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcoeffet <tcoeffet@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-08-05 10:53:06 by tcoeffet          #+#    #+#             */
/*   Updated: 2025-08-05 10:53:06 by tcoeffet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << this->name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name(std::string name)
{this->name = name;}

std::string	Zombie::get_name(void)
{return (this->name);}

Zombie::Zombie(std::string name)
{
	set_name(name);
	return ;
}

Zombie::~Zombie(void)
{
	static size_t i;
	i++;
	std::cout << "[" << i << "] " << Zombie::get_name() << " : destroyed." << std::endl;
	return ;
}