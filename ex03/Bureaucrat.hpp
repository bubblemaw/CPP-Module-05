/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maw <maw@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 11:55:19 by maw               #+#    #+#             */
/*   Updated: 2025/09/23 15:29:08 by maw              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <string>
# include <iostream>
# include <stdexcept>
# include <exception>
# include "AForm.hpp"

class AForm;

class Bureaucrat
{
	private:
		const std::string _name;
		int _grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &obj);
		~Bureaucrat();
		Bureaucrat &operator=(const Bureaucrat &obj);
		std::string getName() const;
		int getGrade() const;
		void IncrementGrade();
		void DecrementGrade();
		void signForm(AForm *obj);					
		void executeForm(const AForm *form);
};

class GradeTooHighException : public std::exception
{
	public:
		virtual const char *what() const throw(){
			return "Grade Too High";
		}
};

class GradeTooLowException : public std::exception
{
	public:
		virtual const char *what() const throw() {
			return "Grade Too Low";
		}
};

class FormNotSigned : public std::exception
{
	public:
		virtual const char *what() const throw(){
			return "Form must be signed before execution";
		}
};

class AlreadySignedException : public std::exception
{
	public:
		const char *what() const throw() {
			return "This form has been already signed";
		}	
};

std::ostream &operator<<(std::ostream &out ,const Bureaucrat &obj);

#endif