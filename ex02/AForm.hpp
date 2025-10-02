/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maw <maw@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 15:53:47 by maw               #+#    #+#             */
/*   Updated: 2025/09/23 14:39:45 by maw              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP
# include <string>
# include <iostream>
# include <stdexcept>
# include <exception>
# include <filesystem>
# include <fstream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string _name;
		bool _signed;
		const int signed_min_grade;
		const int ex_min_grade;
	public:
		AForm();
		AForm(std::string name, int sign_grade, int ex_grade);
		AForm(const AForm &obj);
		virtual ~AForm();
		AForm &operator=(const AForm &obj);
		std::string getName() const;
		int getGrade_ex() const;
		int getGrade_signed() const;
		bool is_signed() const;
		void beSigned(const Bureaucrat &obj);
		void beSigned();
		virtual void execute(Bureaucrat const &executor) const = 0;
};

std::ostream &operator<<(std::ostream &out ,const AForm &obj);

#endif