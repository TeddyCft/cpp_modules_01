/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcoeffet <tcoeffet@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-08-05 10:55:45 by tcoeffet          #+#    #+#             */
/*   Updated: 2025-08-05 10:55:45 by tcoeffet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>



class Zombie
{
	public :

	std::string get_name(void);
	void		set_name(std::string name);
	void		announce(void);

	Zombie(void);
	Zombie(std::string name);
	~Zombie(void);

	private :

	std::string name;
}	;

Zombie* zombieHorde(int N, std::string nam);

#endif