/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maw <maw@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 16:54:28 by maw               #+#    #+#             */
/*   Updated: 2025/09/23 15:24:34 by maw              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm (std::string target): AForm("PresidentialPardonForm", 25, 5), _target(target)
{
	std::cout << "PresidentialPardonForm  Constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm (const PresidentialPardonForm  &obj): AForm("PresidentialPardonForm", 25, 5)
{
	std::cout << "PresidentialPardonForm  Copy Constructor called" << std::endl;
	*this = obj;
}

PresidentialPardonForm::~PresidentialPardonForm ()
{
	std::cout << "PresidentialPardonForm  Destructor called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &obj)
{
	std::cout << "PresidentialPardonForm assignement operator called" << std::endl;
	if (this != &obj)
	{
		_target = obj._target;
		if (obj.is_signed())
			this->beSigned();
	}
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (this->is_signed() == false)
		throw FormNotSigned();	
	if (executor.getGrade() <= this->getGrade_ex())
	{
		std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	}
	else
		throw GradeTooLowException();
}