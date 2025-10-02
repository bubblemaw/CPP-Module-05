/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maw <maw@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 11:54:52 by maw               #+#    #+#             */
/*   Updated: 2025/09/19 16:02:48 by maw              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main ()
{
	Bureaucrat Angelo("Angelo", 150);
	Bureaucrat Gil("Gil", 3);	
	Form Contract("contract", 8, 10);
	std::cout << Contract << std::endl;
	try
	{
		Angelo.signForm(Contract);
	}
	catch(const std::exception& e)
	{
		std::cout << Angelo.getName() << " couldn't sign " << Contract.getName() << " because " << e.what() << std::endl;
	}
	try
	{
		Gil.signForm(Contract);
	}
	catch(const std::exception& e)
	{
		std::cout << Gil.getName() << " couldn't sign " << Contract.getName() << " because " << e.what() << std::endl;
	}
	try
	{
		Gil.signForm(Contract);
	}
	catch(const std::exception& e)
	{
		std::cout << Gil.getName() << " couldn't sign " << Contract.getName() << " because " << e.what() << std::endl;
	}	
	std::cout << Contract << std::endl;	
	return (0);
}