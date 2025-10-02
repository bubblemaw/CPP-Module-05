/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maw <maw@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 15:54:30 by maw               #+#    #+#             */
/*   Updated: 2025/09/18 17:09:17 by maw              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(std::string name, int sign_grade, int ex_grade):_name(name), _signed(false), signed_min_grade(sign_grade), ex_min_grade(ex_grade)
{
	std::cout << "AForm Constructor called" << std::endl;
	if (sign_grade < 1)
		throw GradeTooHighException();
	else if (sign_grade > 150)
		throw GradeTooLowException();
}

AForm::AForm():_name("Default"),  _signed(false), signed_min_grade(150), ex_min_grade(150)
{
	std::cout << "AForm Constructor called" << std::endl;
}

AForm::AForm(const AForm &obj): _name(obj.getName() + "_copy"),  _signed(obj.is_signed()), signed_min_grade(obj.getGrade_signed()), ex_min_grade(obj.getGrade_ex())
{
	std::cout << "AForm Copy Constructor called" << std::endl;	
}

AForm::~AForm()
{
	std::cout << "AForm Destructor called" << std::endl;
}

AForm &AForm::operator=(const AForm &obj)
{
	std::cout << "AForm assignement operator called" << std::endl;
	if (this != &obj)
	{
		_signed = obj._signed;
	}
	return (*this);
}

std::ostream &operator<<(std::ostream &out ,const AForm &obj)
{
	out << "Form: " << obj.getName() << std::endl
		<< "Minimum grade to signed it: " << obj.getGrade_signed() << std::endl
		<< "Minimum grade to execute it: " << obj.getGrade_ex() << std::endl; 
	if (obj.is_signed())
		out << "the form is signed";
	else
		out << "the form is not signed";
	return out;
}

std::string AForm::getName() const
{
	return (_name);
}

int AForm::getGrade_ex() const
{
	return (ex_min_grade);
}

int AForm::getGrade_signed() const
{
	return (signed_min_grade);
}

bool AForm::is_signed() const
{
	return (_signed);
}

void AForm::beSigned(const Bureaucrat &obj)
{
	if (_signed == true)
	{
		throw AlreadySignedException();
	}
	else if (obj.getGrade() <= signed_min_grade)
	{
		_signed = true;
		std::cout << obj.getName() << " signed "
		<< _name << std::endl;		
	}
	else
	{
		throw GradeTooLowException();
	}
}

void AForm::beSigned()
{
	_signed = true;
}
