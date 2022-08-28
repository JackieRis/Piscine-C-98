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

ShrubberyCreationForm::ShrubberyCreationForm(): Form("Shrubbery Creation Form.", 145, 137, "default")
{
	std::cout << "Shrubbery form created.\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("Shrubbery Creation Form.", 145, 137, target)
{
	std::cout << "Shrubbery form created.\n";
}

void	ShrubberyCreationForm::execin() const
{
	std::ofstream outfile(this->getTarget() + "_shrubbery");

	for (size_t i = 0; i < 10; i++)
	{
		outfile << g_tree[i] << std::endl;
	}
	outfile.close();
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Shrubbery form destroyed.\n";
}
