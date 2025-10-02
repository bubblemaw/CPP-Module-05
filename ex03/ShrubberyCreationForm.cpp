/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maw <maw@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 16:55:46 by maw               #+#    #+#             */
/*   Updated: 2025/09/23 15:24:08 by maw              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm (std::string target): AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << "ShrubberyCreationForm  Constructor called" << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm (const ShrubberyCreationForm  &obj)
{
	std::cout << "ShrubberyCreationForm  Copy Constructor called" << std::endl;
}
ShrubberyCreationForm::~ShrubberyCreationForm ()
{
	std::cout << "ShrubberyCreationForm  Destructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj)
{
	std::cout << "ShrubberyCreationForm assignement operator called" << std::endl;
	if (this != &obj)
	{
		_target = obj._target;
		if (obj.is_signed())
			this->beSigned();
	}
	return (*this);
}

std::string ShrubberyCreationForm::getName() const
{
	return (this->getName());
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (this->is_signed() == false)
		throw FormNotSigned();	
	if (executor.getGrade() <= this->getGrade_ex())
	{
		std::string filename;
		filename = _target + "_shruberry";
		std::ofstream file(filename);
		file << "     /\\  " << std::endl;
		file << "    /  \\ " << std::endl;
		file << "   /    \\ " << std::endl;
		file << "  /      \\ " << std::endl;
		file << "  --------" << std::endl;
		file << "  	$$" << std::endl;
		file << "  	$$" << std::endl;
		file.close();	
	}
	else
		throw GradeTooLowException();	
}