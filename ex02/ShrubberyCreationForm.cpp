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
		_signed = obj._signed;
	}
	return (*this);
}

std::string ShrubberyCreationForm::getName() const
{
	return (_name);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (this->_signed == false)
		throw FormNotSigned();	
	if (executor.getGrade() <= ex_min_grade)
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