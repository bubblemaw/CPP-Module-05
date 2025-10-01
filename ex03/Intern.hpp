/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maw <maw@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 16:09:16 by maw               #+#    #+#             */
/*   Updated: 2025/10/01 16:32:29 by maw              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN __HPP
# include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	private:
		std::string _form[3];
	public:
		AForm* makeForm(std::string formName, std::string formTarget);
		Intern();
		~Intern();
		Intern(const Intern &obj);
		Intern& operator=(const Intern &obj);
		RobotomyRequestForm* MakeRobot(std::string target);
		ShrubberyCreationForm* MakeShrubb(std::string target);
		PresidentialPardonForm* MakePres(std::string target);				

};

#endif