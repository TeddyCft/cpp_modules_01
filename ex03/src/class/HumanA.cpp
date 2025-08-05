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
	std::cout << this->getName() << "attacks with their ";
	std::cout << this->weapon.getType() << std::endl;
}

std::string HumanA::getName(void)
{ return this->name; }

void HumanA::setName(std::string name)
{ this->name = name; }

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon)
{
}

HumanA::~HumanA(void) {}