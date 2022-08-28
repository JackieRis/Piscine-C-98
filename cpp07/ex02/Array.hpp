/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 01:50:38 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/07/28 03:21:01 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <stdlib.h>
# include <time.h>

template <typename T>
class Array
{
private:
	T				*ptr;
	unsigned int	Size;
public:
	Array()
	{
		ptr = new T[0];
		Size = 0;
		std::cout << "Array: constructor called.\n";
	}
	Array(unsigned int n)
	{
		Size = n;
		ptr = new T[n];
		std::cout << "Array: constructor called.\n";
	}
	Array(const Array& from)
	{
		unsigned int	i;
	
		i = 0;
		this->Size = from.Size;
		this->ptr = new T[this->Size];
		while (i < this->Size)
		{
			this->ptr[i] = from.ptr[i];
			i++;
		}
		std::cout << "Array: copy constructor called.\n";
	}
	~Array()
	{
		std::cout << "Array: destructor called.\n";
		delete [] this->ptr;
	}

	T&	operator[](unsigned int n)
	{
		if (n >= this->Size)
			throw std::out_of_range("Array: out of range.\n");
		return (this->ptr[n]);
	}
	const T&	operator[](unsigned int n)const
	{
		if (n >= this->Size)
			throw std::out_of_range("Array: out of range.\n");
		return (this->ptr[n]);
	}

	Array&	operator=(const Array& from)
	{
		std::cout << "Array: copy assignement operator called.\n";
		unsigned int	i;

		if (this == &from)
			return (*this);
		delete [] this->ptr;
		this->Size = from.Size;
		this->ptr = new T[this->Size];
		i = 0;
		while (i < this->Size)
		{
			this->ptr[i] = from.ptr[i];
			i++;
		}
		return (*this);
	}

	unsigned int	size()
	{
		return (this->Size);
	}
	void	setArray(T val, int i)
	{
		this->ptr[i] = val;
	}
	T	getVal(int i)
	{
		return (this->ptr[i]);
	}
};

#endif