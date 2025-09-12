/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maw <maw@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 15:53:47 by maw               #+#    #+#             */
/*   Updated: 2025/09/12 17:29:30 by maw              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <string>
# include <iostream>
# include <stdexcept>
# include <exception>

class Form
{
	private:
		const std::string _name;
		bool _signed;
		const int signed_min_grade;
		const int ex_min_grade;
	public:
		Form();
		Form(std::string name, int sign_grade, int ex_grade);
		Form(const Form &obj);
		~Form();
		Form &operator=(const Form &obj);
		std::string getName() const;
		int getGrade() const;
		void IncrementGrade();
		void DecrementGrade();
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

std::ostream &operator<<(std::ostream &out ,const Form &obj);

#endif