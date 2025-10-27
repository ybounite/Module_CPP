/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 14:49:29 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/26 14:55:55 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# include "AForm.hpp"
# include <cstdlib>

// ************************************************************************** //
//                     ROBOTOMYREQUESTFORM Class                              //
// ************************************************************************** //


class	RobotomyRequestForm : public AForm {

public:
	RobotomyRequestForm( void );
	RobotomyRequestForm( const std::string target );
	RobotomyRequestForm( const RobotomyRequestForm &Other );
	RobotomyRequestForm &operator=( const RobotomyRequestForm &Other );
	~RobotomyRequestForm( void );

	void	execute(Bureaucrat const & executor) const;
private:
	std::string	_target;
};
