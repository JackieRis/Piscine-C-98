/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 15:37:32 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/06/14 17:42:58 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap: protected ScavTrap, protected FragTrap
{
private:
	std::string	_name;
	ClapTrap	_ClapName;
public:
	DiamondTrap(/* args */);
	DiamondTrap(std::string);
	~DiamondTrap();
};


#endif