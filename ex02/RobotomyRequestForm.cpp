/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maw <maw@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 19:11:21 by maw               #+#    #+#             */
/*   Updated: 2025/09/19 19:43:46 by maw              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm (std::string target): AForm("RobotomyRequestForm", 72, 45)
{
	std::cout << "RobotomyRequestForm  Constructor called" << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm (const RobotomyRequestForm  &obj)
{
	std::cout << "RobotomyRequestForm  Copy Constructor called" << std::endl;
}
RobotomyRequestForm::~RobotomyRequestForm ()
{
	std::cout << "RobotomyRequestForm  Destructor called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &obj)
{
	std::cout << "RobotomyRequestForm assignement operator called" << std::endl;
	if (this != &obj)
	{
		_signed = obj._signed;
	}
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() <= ex_min_grade)
	{
		std::cout << "shckk shckk shckk shckk shckk shckk shckk" << std::endl;
		srand(time(0));
		int randnum = rand() % 101;
		if (randnum > 50)
			std::cout << _target << " has been robotomized successfully" << std::endl;
		else
			std::cout << "robotomy failed" << std::endl;
	}
	else
		throw GradeTooLowException();	
}