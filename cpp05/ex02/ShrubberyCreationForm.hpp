/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 06:26:55 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/07/18 15:32:23 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm: public Form
{
private:
	/* data */
public:
	ShrubberyCreationForm(/* args */);
	ShrubberyCreationForm(const std::string);
	ShrubberyCreationForm(const ShrubberyCreationForm& from);
	~ShrubberyCreationForm();

	ShrubberyCreationForm&	operator=(const ShrubberyCreationForm& from);

	virtual void	execin() const;
};

std::ostream	&operator<<(std::ostream& os, const ShrubberyCreationForm& from);

#endif