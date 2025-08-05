/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcoeffet <tcoeffet@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-08-05 12:42:46 by tcoeffet          #+#    #+#             */
/*   Updated: 2025-08-05 12:42:46 by tcoeffet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string	Weapon::getType(void)
{ return this->type; }

void		Weapon::setType(std::string type)
{ this->type = type; }

Weapon::Weapon(std::string type)
{
	this->setType(type);
}

Weapon::Weapon(void){}
Weapon::~Weapon(void){}