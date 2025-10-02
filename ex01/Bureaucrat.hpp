/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maw <maw@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 11:55:19 by maw               #+#    #+#             */
/*   Updated: 2025/09/18 17:01:52 by maw              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <string>
# include <iostream>
# include <stdexcept>
# include <exception>
# include "Form.hpp"

class Form;

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
		void signForm(Form &obj);
};

class GradeTooHighException : public std::exception
{
	public:
		const char *what() const throw(){
			return "Grade Too High";
		}
};

class GradeTooLowException : public std::exception
{
	public:
		const char *what() const throw() {
			return "Grade Too Low";
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