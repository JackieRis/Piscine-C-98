/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 01:04:32 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/05/17 12:27:35 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"
#include "Contact.hpp"

Phonebook::Phonebook()
{
	std::cout << "Phonebook created !\n";
}

void	Phonebook::search(int index)
{
	std::string	tmp;
	int			i;
	int			input;

	i = 0;
	while (i < index)
	{
		contact[i].print_contact(i);
		i++;
	}
	std::cout << std::endl << "Indice du contact à afficher :";
	std::cin >> input;
	std::cin.ignore();
	if (std::cin.fail())
	{
		std::cin.clear();
		getline(std::cin, tmp);
		return ;
	}
	if (input > index || input < 1 || input < 0)
		return ;
	contact[input - 1].print();
}

int		Phonebook::loop()
{
	int	i;
	int	j;
	std::string	tmp;

	i = 0;
	j = 0;
	while (tmp != "EXIT")
	{
		std::cout << "Commands: [ADD SEARCH EXIT] ";
		getline(std::cin, tmp);
		if (std::cin.eof() == true)
			return (-1);
		if (tmp == "EXIT")
			break ;
		else if (tmp == "ADD")
		{
			if (contact[i % 8].add_contact() == -1)
				std::cout << "You can't put an empty line\n";
			else if (j < 8)
				j++;
			i++;
		}
		else if (tmp == "SEARCH")
			search(j);
	}
	return (0);
}

Phonebook::~Phonebook()
{
}