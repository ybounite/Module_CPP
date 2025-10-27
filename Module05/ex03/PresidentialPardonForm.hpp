/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 15:38:00 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/26 15:48:01 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# include "AForm.hpp"

// ************************************************************************** //
//                     PRESIDENTIALPARDONFORM Class                           //
// ************************************************************************** //

class	PresidentialPardonForm : public AForm {

public:
	PresidentialPardonForm( void );
	PresidentialPardonForm( const std::string &target );
	PresidentialPardonForm( const PresidentialPardonForm &Other );
	PresidentialPardonForm &operator=( const PresidentialPardonForm &Other );
	~PresidentialPardonForm( void );

	void		execute(Bureaucrat const & executor) const;
private:
	
	std::string	_target;
};
