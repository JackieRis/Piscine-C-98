/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 14:57:43 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/07/17 22:31:56 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal
{
private:
	Brain*	brain;
public:
	Dog(/* args */);
	Dog(const Dog& from);
	virtual	~Dog();

	Dog&	operator=(const Dog& from);
	virtual void	makeSound()const;
};

#endif