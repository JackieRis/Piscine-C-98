/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 02:26:23 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/07/18 05:48:46 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string	name;
	bool				signature;
	const int			gradeToSign;
	const int			gradeToExec;
public:
	Form(/* args */);
	Form(const std::string, const int, const int);
	Form(const Form& from);
	~Form();

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

	//surcharge d'opérateur
	Form&	operator=(const Form& form);

	//getter
	std::string	getName();
	bool		getSignature();
	int			getToSign();
	int			getToExec();

	void	beSigned(Bureaucrat& n);
};
	std::ostream	&operator<<(std::ostream& os, Form& from);

#endif