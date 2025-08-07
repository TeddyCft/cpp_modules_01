/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcoeffet <tcoeffet@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-08-07 15:13:03 by tcoeffet          #+#    #+#             */
/*   Updated: 2025-08-07 15:13:03 by tcoeffet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex04.hpp"

void read_and_replace(std::string s1, std::string s2, std::string infile, std::string outfile)
{
	(void) s1;
	(void) s2;
	std::ifstream ifs(infile.c_str());
	if (!ifs.is_open())
	return ;
	
	std::ofstream ofs(outfile.c_str());
	if (!ofs.is_open())
	{
		ifs.close();
		return ;
	}
	
	std::string buff("");
	while (1)
	{
		ifs >> buff;
		if (!ifs.eof())
			ofs << " ";
		else
			break ;
		if (buff == s1)
			ofs << s2;
		else
			ofs << buff;
		
	}
	ifs.close();
	ofs.close();
}

int main (int ac, char **av)
{
	if (ac != 4)
		return (std::cout << "error : bad arguments" << std::endl, 1);
	
	std::string infile, outfile, s1, s2;

	infile = av[1];
	outfile = infile + ".replace";
	s1 = av[2];
	s2 = av[3];
	read_and_replace(s1, s2, infile, outfile);

}