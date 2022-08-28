/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 14:58:28 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/07/17 22:29:01 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal
{
private:
	Brain*	brain;
public:
	Cat(/* args */);
	Cat(const Cat& from);
	virtual	~Cat();

	Cat&	operator=(const Cat& from);
	virtual void	makeSound()const;
};

#endif