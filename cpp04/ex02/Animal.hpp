/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 15:07:14 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/07/17 23:43:36 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
protected:
	std::string	type;
public:
	Animal(/* args */);
	Animal(const Animal& from);
	virtual	~Animal();

	Animal&	operator=(const Animal& from);
	virtual void	makeSound()const = 0;
	std::string		getType()const;
};

#endif