/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcoeffet <tcoeffet@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-08-05 10:54:20 by tcoeffet          #+#    #+#             */
/*   Updated: 2025-08-05 10:54:20 by tcoeffet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <cstdlib>


int	main(void)
{
	std::string name = "Michel";
	size_t		N = 10;

	Zombie *horde;
	horde = zombieHorde(N, "Michel");
	for (size_t i = 0; i < N; i++)
	 	horde[i].announce();
	delete[] horde;
}