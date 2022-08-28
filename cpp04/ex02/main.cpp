/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 14:56:15 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/07/17 23:44:32 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* a = new WrongCat();
	

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();

	//WrongAnimal
	std::cout << a->getType() << " " << std::endl;
	a->makeSound();

	size_t	count = 8;
	Animal	*array[count];
	for (size_t n = 0; n < count; n++)
	{
		if (n < count / 2)
			array[n] = new Dog();
		else
			array[n] = new Cat();
	}
	for (size_t n = 0; n < count; n++)
		delete array[n];
	delete i;
	delete j;
	delete a;
	return (0);
}
