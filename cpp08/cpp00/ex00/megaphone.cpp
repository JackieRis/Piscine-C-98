/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 00:12:58 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/05/17 12:14:45 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	std::string	tmp;
	i = 1;
	while (argv[i])
	{
		j = 0;
		tmp = argv[i];
		while (tmp[j])
		{
			tmp[j] = std::toupper(tmp[j]);
			j++;
		}
		if (i < argc)
			std::cout << tmp << " ";
		i++;
	}
	std::cout << std::endl;
	return (0);
}
