/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 02:29:52 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/05/17 12:31:24 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

int	Contact::add_contact()
{
	std::string	tmp;

	std::cout << "Enter your first name: \n";
	getline(std::cin, tmp);
	if (tmp.empty())
		return (-1);
	_firstname = tmp;
	std::cout << "Enter your last name: \n";
	getline(std::cin, tmp);
	if (tmp.empty())
		return (-1);
	_lastname = tmp;
	std::cout << "Enter your nickname: \n";
	getline(std::cin, tmp);
	if (tmp.empty())
		return (-1);
	_nickname = tmp;
	std::cout << "Enter your phone number: \n";
	getline(std::cin, tmp);
	if (tmp.empty())
		return (-1);
	_phone = tmp;
	std::cout << "Enter your Darkest secret: \n";
	getline(std::cin, tmp);
	if (tmp.empty())
		return (-1);
	_darkestsecret = tmp;
	return (0);
}

void	Contact::print()
{
	std::cout	<< std::setfill(' ') 
				<< "Firstname: " << _firstname << std::endl
				<< "Lastname: " << _lastname << std::endl
				<< "Nickname: " << _nickname << std::endl
				<< "Phone number: " << _phone << std::endl
				<< "Darkest Secret: " << _darkestsecret << std::endl;
}

void	Contact::print_contact(int index)
{
	std::string	tfirst = _firstname;
	std::string	tlast = _lastname;
	std::string	tnick = _nickname;

	index += 1;
	if (tfirst.length() > 10)
	{	
		tfirst.erase(9);
		tfirst.push_back('.');
	}
	if (tlast.length() > 10)
	{
		tlast.erase(9);
		tlast.push_back('.');
	}
	if (tnick.length() > 10)
	{
		tnick.erase(9);
		tnick.push_back('.');
	}
	std::cout	<< std::setfill(' ')
				<< std::setw(10) << std::right << index		<< "|"
				<< std::setw(10) << std::right << tfirst	<< "|"
				<< std::setw(10) << std::right << tlast		<< "|"
				<< std::setw(10) << std::right << tnick		<< "|"
				<< std::endl;
}

Contact::~Contact()
{
}
