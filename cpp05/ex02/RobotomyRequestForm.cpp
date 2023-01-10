/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 09:19:00 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/07/20 21:37:05 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form("Robotomy Creation Form.", 72, 45, "Default")
{
	std::cout << "Robotomy form created.\n";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("Robotomy Creation Form.", 72, 45, target)
{
	std::cout << "Bruit de perceuse.\n";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& from): Form(from.getName(), from.getSignature(), from.getToExec(), from.getTarget())
{
	std::cout << "Copy constructor called\n";
}

void	RobotomyRequestForm::execin() const
{
	int i;

	srand(time(NULL));
	i = rand() % 100;
	if (i < 50)
		std::cout << this->getTarget() << " get Robotomised.\n";
	else
		std::cout << this->getTarget() << " didn't get Robotomised.\n";
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& from)
{
	std::cout << "Copy assignement operator called\n";
	if (this == &from)
		return *this;
	this->setSignature(from.getSignature());
	this->setTarget(from.getTarget());
	return *this;
}

std::ostream	&operator<<(std::ostream& os, const RobotomyRequestForm& from)
{
	os << from.getName() << ", is a form to make some noise, required grade " << from.getToSign() \
	<< " to get signed and grade " << from.getToExec() << " to execute it.\n";
	if (from.getSignature() == true)
	{	
		os << "Form is already signed. Target was " << from.getTarget() << ".";
		return os;
	}
	os << "Form isn't signed yet ! Actual target is " << from.getTarget() << ".";
	return os;
}

RobotomyRequestForm::~RobotomyRequestForm(){std::cout << "Robotomy form destroyed.\n";}
