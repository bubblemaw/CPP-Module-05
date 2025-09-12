/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maw <maw@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 15:54:30 by maw               #+#    #+#             */
/*   Updated: 2025/09/12 17:29:32 by maw              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int sign_grade, int ex_grade):_name(name), _signed(false)
{
	std::cout << "Form Constructor called" << std::endl;
	if (sign_grade < 1)
		throw GradeTooHighException();
	else if (sign_grade > 150)
		throw GradeTooLowException();
	else
		signed_min_grade = sign_grade;	
}

Form::Form():_name("Default"), _grade(150)
{
	std::cout << "Form Constructor called" << std::endl;
}

Form::Form(const Form &obj)
{
	std::cout << "Form Copy Constructor called" << std::endl;	
	*this = obj;
}

Form::~Form()
{
	std::cout << "Form Destructor called" << std::endl;
}

Form &Form::operator=(const Form &obj)
{
	std::cout << "Form assignement operator called" << std::endl;
	if (this != &obj)
	{
		_grade = obj._grade;
	}
	return (*this);
}



std::ostream &operator<<(std::ostream &out ,const Form &obj)
{
	out << obj.getGrade();
	return out;
}

std::string Form::getName() const
{
	return (_name);
}