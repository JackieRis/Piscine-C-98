/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 06:25:44 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/07/18 15:49:23 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm: public Form
{
private:
	/* data */
public:
	PresidentialPardonForm(/* args */);
	PresidentialPardonForm(std::string _name);
	~PresidentialPardonForm();

	virtual void	execin() const;
};

#endif