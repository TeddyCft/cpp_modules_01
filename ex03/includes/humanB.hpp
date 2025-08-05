/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcoeffet <tcoeffet@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-08-05 12:42:37 by tcoeffet          #+#    #+#             */
/*   Updated: 2025-08-05 12:42:37 by tcoeffet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	public :
	
		void setWeapon(Weapon weapon);
		bool hasWeapon(void);
		Weapon *getWeapon(void);

		void setName(std::string name);
		std::string getName(void);
		void attack(void);

		HumanB(std::string name);
		~HumanB(void);

	private :
		std::string	name;
		Weapon		*weapon;

}		;

#endif