/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 15:07:14 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/07/17 22:07:53 by tnguyen-         ###   ########.fr       */
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
	~Animal();

	virtual Animal&	operator=(const Animal& n);
	virtual void	makeSound()const;
	std::string		getType()const;
};

#endif