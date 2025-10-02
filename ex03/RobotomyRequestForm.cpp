/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maw <maw@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 19:11:21 by maw               #+#    #+#             */
/*   Updated: 2025/09/23 15:23:47 by maw              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm (std::string target): AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout << "RobotomyRequestForm  Constructor called" << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm (const RobotomyRequestForm  &obj) : AForm("RobotomyRequestForm", 72, 45)
{
	std::cout << "RobotomyRequestForm  Copy Constructor called" << std::endl;
	*this = obj;
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
		_target = obj._target;
		if (obj.is_signed())
			this->beSigned();
	}
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (this->is_signed() == false)
		throw FormNotSigned();
	if (executor.getGrade() <= this->getGrade_ex())
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