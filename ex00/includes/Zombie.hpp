/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcoeffet <tcoeffet@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-08-04 14:26:44 by tcoeffet          #+#    #+#             */
/*   Updated: 2025-08-04 14:26:44 by tcoeffet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

typedef class Zombie
{
	public:

	Zombie* newZombie(std::string name);
	void randomChump(std::string name);

	private :

	std::string name;
	void	announce(void);
}	;

#endif