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
#include "humanB.hpp"

bool HumanB::hasWeapon(void)
{
	if (!this->weapon)
		return (false);
	return (true);
}

void HumanB::attack(void)
{
	if (!this->hasWeapon())
		return ;
	std::cout << this->getName() << "attacks with their ";
	std::cout << this->getWeapon()->getType() << std::endl;
}

std::string HumanB::getName(void)
{ return this->name; }
void HumanB::setName(std::string name)
{ this->name = name; }

Weapon *HumanB::getWeapon(void)
{ return this->weapon; }

void HumanB::setWeapon(Weapon weapon)
{ this->weapon = &weapon ;}

HumanB::HumanB(std::string name) : name(name)
{
}

HumanB::~HumanB(void)
{
}