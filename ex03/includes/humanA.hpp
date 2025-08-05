/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcoeffet <tcoeffet@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-08-05 12:42:35 by tcoeffet          #+#    #+#             */
/*   Updated: 2025-08-05 12:42:35 by tcoeffet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	public :

		void setName(std::string name);
		std::string getName(void);
		void attack(void);

		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);

	private :
		std::string	name;
		Weapon&		weapon;

}		;

#endif