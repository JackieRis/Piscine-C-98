/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 09:18:59 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/07/18 15:47:35 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <stdlib.h>
# include <time.h>
# include "Form.hpp"

class RobotomyRequestForm: public Form
{
private:
	/* data */
public:
	RobotomyRequestForm(/* args */);
	RobotomyRequestForm(std::string _name);
	~RobotomyRequestForm();
	
	virtual void	execin() const;
};


#endif