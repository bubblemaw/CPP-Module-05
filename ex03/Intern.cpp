/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maw <maw@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 16:09:07 by maw               #+#    #+#             */
/*   Updated: 2025/10/01 17:38:09 by maw              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern Constructor called" << std::endl;
	_form[0] = "robotomy request";
	_form[1] = "presidential pardon";
	_form[2] = "shrubbery creation";
}

Intern::Intern(const Intern &obj)
{
	std::cout << "Intern Copy Constructor called" << std::endl;	
	*this = obj;
}

Intern::~Intern()
{
	std::cout << "Intern Destructor called" << std::endl;
}

Intern &Intern::operator=(const Intern &obj)
{
	std::cout << "Intern assignement operator called" << std::endl;
	if (this != &obj)
	{
		this->_form[0] = obj._form[0];
		this->_form[1] = obj._form[1];
		this->_form[2] = obj._form[2];				
	}
	return (*this);
}

PresidentialPardonForm* Intern::MakePres(std::string target)
{
	return (new PresidentialPardonForm(target));
}

RobotomyRequestForm* Intern::MakeRobot(std::string target)
{
	return (new RobotomyRequestForm(target));
}

ShrubberyCreationForm* Intern::MakeShrubb(std::string target)
{
	return (new ShrubberyCreationForm(target));
}



AForm* Intern::makeForm(std::string formName, std::string formTarget)
{
	int i = 0;
	while (i < 3)
	{
		if (formName == _form[i])
			break ;
		i++;
	}
	switch(i)
	{
		case 0:
			std::cout << "Intern creates " << formName <<std::endl;		
			return (MakeRobot(formTarget));
			break;
		case 1:
			std::cout << "Intern creates " << formName <<std::endl;		
			return (MakePres(formTarget));
		case 2:
			std::cout << "Intern creates " << formName <<std::endl;		
			return (MakeShrubb(formTarget));
		default:
			std::cout << "this form doesn't exist" << std::endl;	
	}
	return (NULL);
}