/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcoeffet <tcoeffet@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-08-05 12:42:44 by tcoeffet          #+#    #+#             */
/*   Updated: 2025-08-05 12:42:44 by tcoeffet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

bool HumanB::checkHasWeapon(void)
{
	return (this->_weapon != NULL);
}

void HumanB::attack(void)
{
	if (!this->checkHasWeapon())
		return ;
	std::cout << this->getName() << " attacks with their ";
	std::cout << this->getWeapon()->getType() << std::endl;
}

std::string HumanB::getName(void)
{ return this->_name; }
void HumanB::setName(std::string name)
{ this->_name = name; }

Weapon *HumanB::getWeapon(void)
{ return this->_weapon; }

void HumanB::setWeapon(Weapon &weapon)
{ 
	this->_weapon = &weapon ;
}

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
	this->_name = name;
}

HumanB::~HumanB(void)
{
}