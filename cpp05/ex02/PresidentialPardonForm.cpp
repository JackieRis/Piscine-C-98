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

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& from): Form(from.getName(), from.getToSign(), from.getToExec(), from.getTarget())
{}

void	PresidentialPardonForm::execin() const
{
	std::cout << this->getTarget() << " has been forgiven by Zaphod Beeblebrox.\n";
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& from)
{
	std::cout << "Copy assignement operator called\n";
	if (this == &from)
		return *this;
	this->setSignature(from.getSignature());
	this->setTarget(from.getTarget());
	return *this;
}

std::ostream	&operator<<(std::ostream& os, const PresidentialPardonForm& from)
{
	os << from.getName() << ", is a form to get Sardoche's pardon, required grade " << from.getToSign() \
	<< " to get signed and grade " << from.getToExec() << " to execute it.\n";
	if (from.getSignature() == true)
	{	
		os << "Form is already signed. Target was " << from.getTarget() << ".";
		return os;
	}
	os << "Form isn't signed yet ! Actual target is " << from.getTarget() << ".";
	return os;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Presidential pardon form destroyed.\n";
}
