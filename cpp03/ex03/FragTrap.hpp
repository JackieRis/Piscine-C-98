/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 14:20:13 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/06/14 17:46:26 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap: virtual protected ClapTrap
{
private:
	
public:
	FragTrap();
	FragTrap(std::string);
	~FragTrap();

	void	HighFivesGuys(void);
	void	attack(std::string);
};


#endif