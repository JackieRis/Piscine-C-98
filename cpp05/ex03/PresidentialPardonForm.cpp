/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 06:25:42 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/07/20 21:37:10 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("Presidential Pardon Form.", 25, 5, "default")
{
	std::cout << "Presidential pardon form created.\n";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("Presidential Pardon Form.", 25, 5, target)
{
	std::cout << "Presidential pardon form created.\n";
}

void	PresidentialPardonForm::execin() const
{
	std::cout << this->getTarget() << " has been forgiven by Zaphod Beeblebrox.\n";
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Presidential pardon form destroyed.\n";
}
