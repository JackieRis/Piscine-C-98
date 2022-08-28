/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 02:26:23 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/07/21 00:20:36 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string	name;
	bool				signature;
	const int			gradeToSign;
	const int			gradeToExec;
	const std::string	target;
public:
	Form(/* args */);
	Form(const std::string _name, const int, const int, const std::string _target);
	Form(const Form& from);
	virtual ~Form() =0;

	//exception
	class	GradeTooHighException: std::exception
	{
		public:
			virtual const char*	what()const throw();
	};
	class	GradeTooLowException: std::exception
	{
		public:
			virtual const char*	what()const throw();
	};
	class	SignedException: std::exception
	{
		public:
			virtual const char*	what()const throw();
	};
	class	UnsignedException: std::exception
	{
		public:
			virtual const char* what()const throw();
	};

	//getter
	std::string	getName()const;
	std::string	getTarget()const;
	bool		getSignature()const;
	int			getToSign()const;
	int			getToExec()const;

	void	execute(Bureaucrat const & executor) const;
	virtual void	execin() const;
	//void	executeForm(const RobotomyRequestForm& form);
	//void	executeForm(const PresidentialPardonForm& form);
	void	beSigned(Bureaucrat const& n);
};

std::ostream	&operator<<(std::ostream& os, Form& from);

#endif