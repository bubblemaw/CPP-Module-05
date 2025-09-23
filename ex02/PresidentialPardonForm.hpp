/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maw <maw@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 16:24:21 by maw               #+#    #+#             */
/*   Updated: 2025/09/23 15:04:32 by maw              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include "AForm.hpp"
# include "Bureaucrat.hpp"

class Bureaucrat;
class AForm;

class PresidentialPardonForm : public AForm
{
	private:
		std::string _target;
	public:
		PresidentialPardonForm (std::string target);
		PresidentialPardonForm (const PresidentialPardonForm  &obj);
		~PresidentialPardonForm ();
		PresidentialPardonForm &operator=(const PresidentialPardonForm  &obj);
		void execute(Bureaucrat const &executor) const;
};

#endif