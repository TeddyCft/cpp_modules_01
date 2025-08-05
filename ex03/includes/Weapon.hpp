/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcoeffet <tcoeffet@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-08-05 12:42:39 by tcoeffet          #+#    #+#             */
/*   Updated: 2025-08-05 12:42:39 by tcoeffet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
	public :

	std::string getType(void);
	void		setType(std::string type);

	Weapon(void);
	Weapon(std::string type);
	~Weapon(void);

	private :

	std::string type;

}		;
 
#endif