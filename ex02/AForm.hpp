/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maw <maw@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 15:53:47 by maw               #+#    #+#             */
/*   Updated: 2025/09/19 18:16:02 by maw              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <string>
# include <iostream>
# include <stdexcept>
# include <exception>
# include "Bureaucrat.hpp"
# include <filesystem>
# include <fstream>

class Bureaucrat;

class AForm
{
	protected:
		const std::string _name;
		bool _signed;
		const int signed_min_grade;
		const int ex_min_grade;
	public:
		AForm();
		AForm(std::string name, int sign_grade, int ex_grade);
		AForm(const AForm &obj);
		~AForm();
		AForm &operator=(const AForm &obj);
		std::string getName() const;
		int getGrade_ex() const;
		int getGrade_signed() const;
		bool is_signed() const;
		virtual void beSigned(const Bureaucrat &obj);
		virtual void execute(Bureaucrat const &executor) const = 0;
};

std::ostream &operator<<(std::ostream &out ,const Form &obj);

#endif