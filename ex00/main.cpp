/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maw <maw@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 11:54:52 by maw               #+#    #+#             */
/*   Updated: 2025/09/12 15:44:15 by maw              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main ()
{
	std::cout << "* GRADE TOO LOW EXAMPLE *" << std::endl;
	try
	{
		Bureaucrat Vieux("Vieux", 157);
	}
	catch(const std::exception& e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	std::cout << "* GRADE TOO HIGH EXAMPLE *" << std::endl;	
	try
	{
		Bureaucrat Jeune("Jeune", 0);
	}
	catch(const std::exception& e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	std::cout << "* GOOD EXAMPLE *" << std::endl;		
	try
	{
		Bureaucrat Mid("Mid", 89);
	}
	catch(const std::exception& e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	std::cout << "* INCREMENT EXAMPLE *" << std::endl;	
	Bureaucrat Carl("Carl", 1);
	try
	{
		Carl.IncrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cout << Carl.getName() << " Exception caught: " << e.what() << std::endl;
	}
	std::cout << Carl.getName() << " " << Carl.getGrade() << std::endl;
	std::cout << "* DECREMENT EXAMPLE *" << std::endl;	
	Bureaucrat Angelo("Angelo", 150);
	try
	{
		Angelo.DecrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cout << Angelo.getName() << " Exception caught: " << e.what() << std::endl;
	}
	std::cout << Angelo.getName() << " " << Angelo.getGrade() << std::endl;
	return (0);
}