/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 14:58:28 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/07/17 22:07:45 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat: public Animal
{
private:
	
public:
	Cat(/* args */);
	Cat(const Cat& from);
	~Cat();

	virtual Cat&	operator=(const Cat& from);
	virtual void	makeSound()const;
};

#endif