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

std::string ft_replace_str(std::string s1, std::string s2, std::string line)
{
	std::string newLine = "";
	static int	first;
	size_t 		i = 0;
	int 		j;

	if (first != 0)
		newLine.append("\n");
	first = 1;
	while (true && !line.empty())
	{
		j =	line.find(s1, i);
		if (j == -1)
		{
			newLine.append(line, i, line.size() - i);
			break ;
		}
		newLine.append(line, i, j - i);
		newLine.append(s2);
		i = j + s1.size();
		if (i == line.size())
			break ;
	}
	
	return (newLine);
}

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
	
	std::string line("");
	while (1)
	{
		std::getline(ifs, line);
		line = ft_replace_str(s1, s2, line);
		ofs << line;
		if (ifs.eof())
			break ;
		
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