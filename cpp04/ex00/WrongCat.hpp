/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 19:36:13 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/07/17 22:20:51 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	protected:

	public:
		WrongCat();
		WrongCat(const WrongCat& from);
		~WrongCat();

		WrongCat&	operator=(const WrongCat& from);
		void	makeSound()const;
};

#endif
