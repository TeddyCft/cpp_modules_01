/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombiehorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcoeffet <tcoeffet@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-08-05 10:55:42 by tcoeffet          #+#    #+#             */
/*   Updated: 2025-08-05 10:55:42 by tcoeffet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	if (N < 0)
		return (NULL);
	Zombie *horde = new Zombie[N];
	if (!horde)
	{
		std::cerr << "error : new failed" << std::endl;
		return (NULL);
	}
	for (int i = 0; i < N; i++)
		horde[i].set_name(name);
	return (horde);
}
