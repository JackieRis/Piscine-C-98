/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 10:10:56 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/05/12 10:17:59 by tnguyen-         ###   ########.fr       */
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
	void	announce(void);
};
	
	void	setName(std::string name);
	Zombie*	newZombie(std::string name);
	void	randomChump(std::string name);


#endif