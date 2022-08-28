/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 12:04:10 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/05/24 16:20:15 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

//define
# define DEB "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-\
ketchup burger. I really do!\n"
# define INF "I cannot believe adding extra bacon costs more money. You didn’t put\
enough bacon in my burger! If you did, I wouldn’t be asking for more!\n"
# define WARN "I think I deserve to have some extra bacon for free. I’ve been \
coming for years whereas you started working here since last month.\n"
# define ERR "This is unacceptable! I want to speak to the manager now.\n"

class Harl
{
private:
	void	debug();
	void	info();
	void	warning();
	void	error();
public:
	Harl(/* args */);
	~Harl();

	void    complain(std::string level);
};


#endif