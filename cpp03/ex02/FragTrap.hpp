/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 14:20:13 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/07/18 00:08:43 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap: protected ClapTrap
{
private:
	
public:
	FragTrap();
	FragTrap(std::string);
	FragTrap(const FragTrap& from);
	~FragTrap();

	FragTrap&	operator=(const FragTrap& from);
	void	HighFivesGuys(void);
	void	attack(std::string);
};


#endif