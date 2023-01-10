/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 02:26:21 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/07/18 05:59:09 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): name("defautlt"), signature(false), gradeToSign(75), gradeToExec(75)
{
	std::cout << "Form created.\n";
}

Form::Form(const std::string _name, const int toSign, const int toExec)
: name(_name), signature(false), gradeToSign(toSign), gradeToExec(toExec)
{
	if (toSign < 1 || toExec < 1)
		throw Form::GradeTooHighException();
	else if (toSign > 150 || toExec > 150)
		throw Form::GradeTooLowException();
	std::cout << "Form " << name << " created. You need to be grade " << gradeToSign << " to sign it.";
	std::cout << " To execute it, bureaucrate needs to be grade " << gradeToExec << std::endl;
}

Form::Form(const Form& from): name(from.name), signature(from.signature), gradeToSign(from.gradeToSign), gradeToExec(from.gradeToExec)
{
	std::cout << "Copy constructor called.\n";
}

Form &Form::operator=(const Form& from)
{
	std::cout << "Copy assignement operator called\n";
	if (this == &from)
		return *this;
	this->signature = from.signature;
	return *this;
}

//exception
const char* Form::GradeTooHighException::what()const throw()
{
	return ("Grade is too High !");
}

const char*	Form::GradeTooLowException::what()const throw()
{
	return ("Grade is too Low !");
}
const char* Form::SignedException::what()const throw()
{
	return ("Form already signed.");
}

//getter
std::string	Form::getName(){return(this->name);}
bool		Form::getSignature(){return(this->signature);}
int			Form::getToSign(){return(this->gradeToSign);}
int			Form::getToExec(){return(this->gradeToExec);}

std::ostream	&operator<<(std::ostream& os, Form& from)
{
	if (from.getSignature() == true)
	{
		os << from.getName() << ", form signed. Grade to sign it " << from.getToSign() 
		<< ". Grade to execute it " << from.getToExec() << std::endl;
	}
	else
	{
		os << from.getName() << ", form not signed. Grade to sign it " << from.getToSign()
		<< ". Grade to execute it " << from.getToExec() << std::endl;
	}
	return (os);
}

void	Form::beSigned(Bureaucrat& n)
{
	if (this->signature == true)
		throw SignedException();
	if (n.getGrade() <= this->gradeToSign)
		this->signature = true;
	else
		throw GradeTooLowException();
}

Form::~Form(){std::cout << "Form destructed.\n";}
