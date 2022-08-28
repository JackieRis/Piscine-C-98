/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 00:34:21 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/07/18 05:56:24 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

//constructor
Bureaucrat::Bureaucrat(){std::cout << "Bureaucrate hired.\n";}

Bureaucrat::Bureaucrat(const std::string _name, int _grade): name(_name), grade(_grade)
{
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	std::cout << name << " bureaucrat hired, " << grade << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& from)
{
	std::cout << "Copy constructor called.\n";
	this->name = from.name;
	this->grade = from.grade;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& from)
{
	std::cout << "Copy assignement operator called.\n";
	if (this == &from)
		return (*this);
	this->name = from.name;
	this->grade = from.grade;
	return (*this);
}

//getter
std::string	Bureaucrat::getName(){return (this->name);}
int	Bureaucrat::getGrade(){return (this->grade);}

const char*	Bureaucrat::GradeTooHighException::what()const throw()
{
	return ("Grade is too High !");
}

const char*	Bureaucrat::GradeTooLowException::what()const throw()
{
	return ("Grade is too Low !");
}

void	Bureaucrat::signForm(Form& f)
{
	try
	{
		f.beSigned(*this);
		std::cout << this->name << " signed " << f.getName() << std::endl;
	}
	catch(Form::SignedException &e)
	{
		std::cout << f.getName() << " ";
		std::cerr << e.what() << '\n';
	}
	catch(Form::GradeTooLowException &e)
	{
		std::cout << this->name << " couldn't sign " << f.getName() << " because he hasn't the grade for.\n";
		//std::cerr << e.what() << '\n';
	}
}

void	Bureaucrat::promote()
{
	if (grade == 1)
		throw GradeTooHighException();
	grade--;
}

void	Bureaucrat::demote()
{
	if (grade == 150)
		throw GradeTooLowException();
	grade++;
}

std::ostream	&operator<<(std::ostream& os, Bureaucrat& from)
{
	os << from.getName() << ", bureaucrat grade " << from.getGrade() << std::endl;
	return (os);
}

Bureaucrat::~Bureaucrat(){std::cout << "Bureaucrate fired.\n";}
