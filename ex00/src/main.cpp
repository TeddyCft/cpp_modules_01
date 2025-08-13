/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcoeffet <tcoeffet@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-08-04 14:24:40 by tcoeffet          #+#    #+#             */
/*   Updated: 2025-08-04 14:24:40 by tcoeffet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *tom;
	std::string name = "Tom";

	tom = newZombie(name);
	if (!tom)
		return (1);
	tom->announce();
	delete(tom);
	randomChump("Jerry");
	return (0);
}