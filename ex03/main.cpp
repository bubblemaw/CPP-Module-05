/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maw <maw@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 11:54:52 by maw               #+#    #+#             */
/*   Updated: 2025/10/01 17:41:41 by maw              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main ()
{
	Intern someRandomIntern;
	AForm* robot;
	AForm* milk;
	AForm* shrubb;
	AForm* pres;

	std::cout << "------------------robot form test-----------------------" << std::endl;
	robot = someRandomIntern.makeForm("robotomy request", "Bender");
	std::cout << std::endl << std::endl;	
	std::cout << "------------------unknown form test-----------------------" << std::endl;	
	milk = someRandomIntern.makeForm("milk", "Cow");
	std::cout << std::endl << std::endl;	
	std::cout << "------------------shrubb form test-----------------------" << std::endl;
	shrubb = someRandomIntern.makeForm("shrubbery creation", "Bender");
	std::cout << std::endl << std::endl;	
	std::cout << "------------------president form test-----------------------" << std::endl;
	pres = someRandomIntern.makeForm("presidential pardon", "Bender");
	std::cout << std::endl << std::endl;
	
	delete milk;
	delete robot;
	delete pres;
	delete shrubb;		
	return (0);
}