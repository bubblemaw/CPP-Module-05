/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maw <maw@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 15:53:47 by maw               #+#    #+#             */
/*   Updated: 2025/09/18 17:01:51 by maw              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <string>
# include <iostream>
# include <stdexcept>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

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
		int getGrade_ex() const;
		int getGrade_signed() const;
		bool is_signed() const;
		void beSigned(const Bureaucrat &obj);
};

std::ostream &operator<<(std::ostream &out ,const Form &obj);

#endif