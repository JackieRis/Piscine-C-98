/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 06:27:38 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/07/20 21:36:57 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

const std::string g_tree[] =
{
"               ,@@@@@@@,",
"       ,,,.   ,@@@@@@/@@,  .oo8888o.",
"    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o",
"   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'",
"   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'",
"   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'",
"   `&%\\ ` /%&'    |.|        \\ '|8'",
"       |o|        | |         | |",
"       |.|        | |         | |",
"     \\/ ._\\//_/__/  ,\\__//__\\/.  \\_//__/_"
};

ShrubberyCreationForm::ShrubberyCreationForm(): Form("Shrubbery Creation Form", 145, 137, "default")
{
	std::cout << "Shrubbery form created.\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target): Form("Shrubbery Creation Form", 145, 137, target)
{
	std::cout << "Shrubbery form created.\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& from): Form(from.getName(),from.getToSign(),from.getToExec(),from.getTarget())
{
	std::cout << "Copy constructor called\n";
}

void	ShrubberyCreationForm::execin() const
{
	std::fstream outfile(this->getTarget() + "_shrubbery");

	for (size_t i = 0; i < 10; i++)
	{
		outfile << g_tree[i] << std::endl;
	}
	outfile.close();
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& from)
{
	std::cout << "Copy assignement operator called\n";
	if (this == &from)
		return *this;
	this->setSignature(from.getSignature());
	this->setTarget(from.getTarget());
	return *this;
}

std::ostream	&operator<<(std::ostream& os, const ShrubberyCreationForm& from)
{
	os << from.getName() << ", is a form to add trees in your life, required grade " << from.getToSign() \
	<< " to get signed and grade " << from.getToExec() << " to execute it.\n";
	if (from.getSignature() == true)
	{	
		os << "Form is already signed. Target was " << from.getTarget() << ".";
		return os;
	}
	os << "Form isn't signed yet ! Actual target is " << from.getTarget() << ".";
	return os;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Shrubbery form destroyed.\n";
}
