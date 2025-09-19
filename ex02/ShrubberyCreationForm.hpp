/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maw <maw@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 16:10:42 by maw               #+#    #+#             */
/*   Updated: 2025/09/19 18:00:42 by maw              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	private:
		std::string _target;	
	public:
		ShrubberyCreationForm (std::string target);
		ShrubberyCreationForm (const ShrubberyCreationForm  &obj);
		~ShrubberyCreationForm ();
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm  &obj);
		void execute(Bureaucrat const &executor) const;
};



#endif