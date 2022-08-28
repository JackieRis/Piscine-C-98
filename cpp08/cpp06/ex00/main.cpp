/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 01:43:46 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/07/25 10:49:56 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <sstream>
#include <cmath>
#include <ctype.h>

static size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

static int	checkDigit(char *str)
{
	int	k;

	k = 0;
	for (size_t i = 0; i < ft_strlen(str); i++)
	{
		if (str[i] == '.')
			k++;
		if (!(str[i] > 47 && str[i] < 58) && k == 2)
			return (-1);
	}
	if (k == 1)
		return (1);
	return (0);
}

static std::string convFloat(float f)
{
	std::stringstream ss;

	ss << f;
	if (ss.str().find('.') == std::string::npos)
		return (ss.str() += ".0");
	return (ss.str());
}

static void	fromChar(char c)//TODO check char if isok
{
	std::cout << "char: " << c << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << convFloat(static_cast<float>(c)) << "f\n";
	std::cout << "float: " << convFloat(static_cast<float>(c)) << std::endl;
}

static void	fromInt(double	n) //TODO check int if isok
{
	if ((n >= 0 && n < 32) || n == 127)
		std::cout << "char: non displayable\n";
	else if (n < 0 || n > 127)
		std::cout << "char: impossible\n";
	else
		std::cout << "char: " << "'" << static_cast<char>(n) << "'" << std::endl;
	if (n >= -2147483648 && n <= 2147483647)
		std::cout << "int: " << static_cast<int>(n) <<std::endl;
	else
		std::cout << "int: impossible\n";
	std::cout << "float: " << convFloat(static_cast<float>(n)) << "f\n";
	std::cout << "double: " << convFloat(static_cast<double>(n)) << std::endl;
}

static void	fromFloat(float n) //TODO check float if isok
{
	int	nb = static_cast<int>(n);

	if ((nb >= 0 && nb < 32) || nb == 127)
		std::cout << "char: non displayable\n";
	else if (nb < 0 || nb > 127)
		std::cout << "char: impossible\n";
	else
		std::cout << "char: " << "'" << static_cast<char>(n) << "'" << std::endl;
	std::cout << "int: " << nb << std::endl;
	std::cout << "float: " << convFloat(n) << "f\n";
	std::cout << "double: " << convFloat(static_cast<double>(n)) << std::endl;
}

static void	fromDouble(double n) //TODO check double if isok
{
	int	nb = static_cast<int>(n);

	if ((nb >= 0 && nb < 32) || nb == 127)
		std::cout << "char: non displayable\n";
	else if (nb < 0 || nb > 127)
		std::cout << "char: impossible\n";
	else
		std::cout << "char: " << "'" << static_cast<char>(n) << "'" << std::endl;
	if (n >= -2147483648 && n <= 2147483647)
		std::cout << "int: " << static_cast<int>(n) <<std::endl;
	else
		std::cout << "int: impossible\n";
	std::cout << "float: " <<  convFloat(static_cast<float>(n)) << "f\n";
	std::cout << "double: " << convFloat(n) << std::endl;
}

static void	fromString(char *str) //TODO check string if isok
{
	std::string	tmp = str;

	std::cout << "char: impossible\n";
	std::cout << "int: impossible\n";
	if (tmp == "nan")
	{	
		std::cout << "float: " << std::atof(str) << "f\n";
		std::cout << "double: " << std::atof(str) << std::endl;
	}
	else
	{
		std::cout << "float: impossible\n";
		std::cout << "double: impossible\n";
	}
}

int	main(int argc, char **argv)
{
	std::string	newArg;

	if (argc != 2)
		return (1);
	newArg = argv[1];
	if (ft_strlen(argv[1]) == 1 && !isdigit(argv[1][0]))
	{
		fromChar(argv[1][0]);
		return (0);
	}
	else if (newArg[newArg.length() - 1] == 'f')
	{
		fromFloat(std::atof(newArg.c_str()));
		return (0);
	}
	else if(ft_strlen(argv[1]) > 1 && checkDigit(argv[1]) == -1)
	{
		fromString(argv[1]);
		return (0);
	}
	else if (checkDigit(argv[1]) == 0) //TODO condition int
	{
		fromInt(std::atof(newArg.c_str()));
		return (0);
	}
	else
		fromDouble(std::atof(newArg.c_str()));
	return (0);
}
