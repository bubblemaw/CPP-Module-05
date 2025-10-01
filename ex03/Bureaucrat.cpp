/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maw <maw@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 11:55:12 by maw               #+#    #+#             */
/*   Updated: 2025/09/23 15:39:03 by maw              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade):_name(name)
{
	std::cout << "Bureaucrat Constructor called" << std::endl;
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	else
		_grade = grade;	
}

Bureaucrat::Bureaucrat():_name("Default"), _grade(150)
{
	std::cout << "Bureaucrat Constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj)
{
	std::cout << "Bureaucrat Copy Constructor called" << std::endl;	
	*this = obj;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Destructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj)
{
	std::cout << "Bureaucrat assignement operator called" << std::endl;
	if (this != &obj)
	{
		_grade = obj._grade;
	}
	return (*this);
}

std::ostream &operator<<(std::ostream &out ,const Bureaucrat &obj)
{
	out << obj.getGrade();
	return out;
}

std::string Bureaucrat::getName() const
{
	return (_name);
}

int	Bureaucrat::getGrade() const
{
	return (_grade);
}

void Bureaucrat::IncrementGrade()
{
	if (_grade == 1)
		throw GradeTooHighException();	
	this->_grade -= 1;
}

void Bureaucrat::DecrementGrade()
{
	if (_grade == 150)
		throw GradeTooLowException();
	this->_grade += 1;		
}

void Bureaucrat::signForm(AForm *obj)
{
	obj->beSigned(*this);
}

void Bureaucrat::executeForm(const AForm *form)
{
	form->execute(*this);
	std::cout << this->getName()
			<< " executed "
			<< form->getName() << std::endl;
}