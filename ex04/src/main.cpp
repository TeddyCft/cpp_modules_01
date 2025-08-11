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
	size_t 		i = 0;
	int 		j;

	while (true && !line.empty())
	{
		j =	line.find(s1, i); //searching for s1 in line

		if (j == -1) // if s1 not found, append what remains in line
		{
			newLine.append(line, i, line.size() - i);
			break ;
		}
		
		//replace the content of the s1 found, from the content of s2
		newLine.append(line, i, j - i);
		newLine.append(s2);
		i = j + s1.size();
		if (i == line.size())
			break ;
	}
	return (newLine);
}

int read_and_replace(std::string s1, std::string s2, std::string infile, std::string outfile)
{
	//open infile stream
	std::ifstream ifs(infile.c_str());
	if (!ifs.is_open())
	{
		std::cerr << "error : failed to open file " << infile << std::endl;
		return (1);
	}	
	
	//open outfile stream
	std::ofstream ofs(outfile.c_str());
	if (!ofs.is_open())
	{
		std::cerr << "error : failed to open file " << outfile << std::endl;
		ifs.close();
		return (1);
	}
	
	//call for each line of infile and replace its content if needed
	std::string line("");
	while (1)
	{
		std::getline(ifs, line);
		if (!s1.empty())
			line = ft_replace_str(s1, s2, line);
		ofs << line;
		if (ifs.eof())
			break ;
		ofs << std::endl;
		
	}
	//close infine and outfile stream
	ifs.close();
	ofs.close();
	return (0);
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

	return (read_and_replace(s1, s2, infile, outfile));
}