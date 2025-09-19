/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maw <maw@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 16:54:28 by maw               #+#    #+#             */
/*   Updated: 2025/09/19 19:59:01 by maw              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm (std::string target): AForm("PresidentialPardonForm", 25, 5)
{
	std::cout << "PresidentialPardonForm  Constructor called" << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm (const PresidentialPardonForm  &obj)
{
	std::cout << "PresidentialPardonForm  Copy Constructor called" << std::endl;
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
		_signed = obj._signed;
	}
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() <= ex_min_grade)
	{
		std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	}
	else
		throw GradeTooLowException();	
}