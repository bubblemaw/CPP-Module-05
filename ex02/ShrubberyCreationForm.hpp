/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maw <maw@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 16:10:42 by maw               #+#    #+#             */
/*   Updated: 2025/09/23 15:04:37 by maw              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include "AForm.hpp"
# include "Bureaucrat.hpp"

class Bureaucrat;
class AForm;

class ShrubberyCreationForm : public AForm
{
	private:
		std::string _target;	
	public:
		ShrubberyCreationForm (std::string target);
		ShrubberyCreationForm (const ShrubberyCreationForm  &obj);
		~ShrubberyCreationForm ();
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &obj);
		std::string getName() const;	
		void execute(Bureaucrat const &executor) const;
};

#endif