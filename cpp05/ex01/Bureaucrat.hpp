/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 00:28:31 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/07/18 05:08:46 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <stdexcept>
# include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	const std::string	name;
	int					grade;
public:
	Bureaucrat(/* args */);
	Bureaucrat(const std::string, int);
	Bureaucrat(const Bureaucrat& from);
	~Bureaucrat();
	
	//surcharge d'operateur
	Bureaucrat&	operator=(const Bureaucrat& from);

	//getter
	std::string	getName();
	int			getGrade();

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

	void	signForm(Form& f);
	void	promote();
	void	demote();
};
	std::ostream	&operator<<(std::ostream& os, Bureaucrat& from);

#endif