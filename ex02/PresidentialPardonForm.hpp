/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maw <maw@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 16:24:21 by maw               #+#    #+#             */
/*   Updated: 2025/09/19 19:58:02 by maw              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include "AForm.hpp"

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