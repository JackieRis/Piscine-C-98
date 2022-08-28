/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 18:18:31 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/07/27 21:55:07 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <stdint.h>
# include <iostream>

typedef struct Data
{
	uintptr_t	n;
	void		*yes;
	int			what;
}Data;

uintptr_t	serialize(Data* ptr);
Data*		deserialize(uintptr_t raw);

#endif