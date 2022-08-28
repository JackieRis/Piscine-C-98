/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 10:46:26 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/05/12 11:00:04 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
	std::string	_name;
public:
	Zombie(/* args */);
	~Zombie();

	void	setName(std::string);
	void	announce();
};
	// Zombie.cpp
	void	setName(std::string name);

	// zombieHorde.cpp
	Zombie	*zombieHorde(int n, std::string name);

#endif