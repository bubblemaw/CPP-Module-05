/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maw <maw@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 11:54:52 by maw               #+#    #+#             */
/*   Updated: 2025/09/23 15:46:45 by maw              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main ()
{
	Bureaucrat Angelo("Angelo", 150);
	Bureaucrat Gil("Gil", 3);	
	AForm *A = new ShrubberyCreationForm("juicee");
	AForm *B = new RobotomyRequestForm("Robot");
	AForm *C = new PresidentialPardonForm("President");
	try
	{
		Angelo.signForm(A);
	}
	catch(const std::exception& e)
	{
		std::cout << Angelo.getName() << " couldn't sign " << A->getName() << " because " << e.what() << std::endl;
	}
	try
	{
		Gil.signForm(C);
	}
	catch(const std::exception& e)
	{
		std::cout << Gil.getName() << " couldn't sign " << C->getName() << " because " << e.what() << std::endl;
	}
	try
	{
		Gil.executeForm(A);
	}
	catch(const std::exception& e)
	{
		std::cout << Gil.getName() << " couldn't execute " << A->getName() << " because " << e.what() << std::endl;
	}
	try
	{
		Gil.executeForm(B);
	}
	catch(const std::exception& e)
	{
		std::cout << Gil.getName() << " couldn't execute " << B->getName() << " because " << e.what() << std::endl;
	}
	try
	{
		Gil.executeForm(C);
	}
	catch(const std::exception& e)
	{
		std::cout << Gil.getName() << " couldn't execute " << C->getName() << " because " << e.what() << std::endl;
	}		
	delete B;
	delete A;
	delete C;
	return (0);
}