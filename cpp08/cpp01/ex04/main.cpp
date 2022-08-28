/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 10:03:54 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/05/24 11:15:45 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	file(char **argv)
{
	static const size_t npos = -1;
	size_t			pos;
	std::string		line;
	std::string		newPath;
	std::string		replace = ".replace";
	std::string		str;
	std::string		str2;
	std::ifstream	fichier(argv[1], std::ios::in);
	newPath = argv[1] + replace;
	std::ofstream	newFile(newPath, std::ios::out | std::ios::trunc);

	if (fichier)
	{
		str = argv[2];
		str2 = argv[3];
		std::getline(fichier, line);
		pos = 0;
		while (!fichier.eof())
		{
			pos = line.find(argv[2], 0);
			while (pos != npos)
			{
				line.erase(pos, str.length());
				line.insert(pos, str2);
				pos = line.find(argv[2], 0);
			}
			newFile << line << std::endl;
			std::getline(fichier, line);
			pos = 0;
		}
		newFile << line << std::endl;
	}
	else
	{
		std::cout << "Can't open file: " << argv[1] << std::endl;
		return (-1); 
	}
	newFile.close();
	fichier.close();
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "You need 3 arguments, not less, not more\n";
		return (-1);
	}
	if (file(argv) == -1)
		return (-1);
	return (0);
}