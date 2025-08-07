/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcoeffet <tcoeffet@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-08-05 12:42:42 by tcoeffet          #+#    #+#             */
/*   Updated: 2025-08-05 12:42:42 by tcoeffet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "humanA.hpp"

void HumanA::attack(void)
{
	std::cout << this->getName() << " attacks with their " << this->_weapon.getType() << std::endl;
}

std::string HumanA::getName(void)
{ return this->_name; }

void HumanA::setName(std::string name)
{ this->_name = name; }

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
}

HumanA::~HumanA(void) {}