/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 14:57:43 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/07/17 22:11:28 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog: public Animal
{
private:
	/* data */
public:
	Dog(/* args */);
	Dog(const Dog& from);
	~Dog();

	virtual	Dog&	operator=(const Dog& from);
	virtual void	makeSound()const;
};

#endif