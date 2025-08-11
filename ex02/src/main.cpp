/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcoeffet <tcoeffet@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-08-05 12:09:33 by tcoeffet          #+#    #+#             */
/*   Updated: 2025-08-05 12:09:33 by tcoeffet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string& stringREF = str;

	std::cout << "memory address of str		:" << &str << std::endl;
	std::cout << "memory address in stringPTR	:" << stringPTR << std::endl;
	std::cout << "memory address in stringREF	:" << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << "str value 	: [" << str << "]" << std::endl;
	std::cout << "stringPTR value	: [" << *stringPTR << "]" << std::endl;
	std::cout << "stringREF value	: [" << stringREF << "]" << std::endl;
	return (0);
}