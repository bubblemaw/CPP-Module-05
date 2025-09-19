/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maw <maw@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 16:21:17 by maw               #+#    #+#             */
/*   Updated: 2025/09/19 19:45:26 by maw              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	private:
		std::string _target;	
	public:
		RobotomyRequestForm (std::string target);
		RobotomyRequestForm (const RobotomyRequestForm  &obj);
		~RobotomyRequestForm ();
		RobotomyRequestForm  &operator=(const RobotomyRequestForm &obj);
		void execute(Bureaucrat const &executor) const;		
};

#endif