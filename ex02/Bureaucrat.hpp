/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maw <maw@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 11:55:19 by maw               #+#    #+#             */
/*   Updated: 2025/09/19 20:23:56 by maw              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <string>
# include <iostream>
# include <stdexcept>
# include <exception>
# include "Form.hpp"

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
		void signForm(AForm &obj);
		void executeForm(AForm const &form);
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
std::ostream &operator<<(std::ostream &out ,const Bureaucrat &obj);

#endif