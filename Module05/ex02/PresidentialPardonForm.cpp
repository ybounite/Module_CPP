/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 15:42:43 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/26 15:49:24 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void )
	: AForm("PresidentialPardonForm", 25, 5), _target("Default"){
	std::cout << "PresidentialPardonForm defualt constructor hes been called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( const std::string &target )
	: AForm("PresidentialPardonForm", 25, 5), _target(target) {

	std::cout << "PresidentialPardonForm: " << getName() <<" constructor has been called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm &Other )
	: AForm( Other ), _target(Other._target) {
	
	std::cout << "PresidentialPardonForm: " << getName() << " copy constructor has been called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=( const PresidentialPardonForm &Other ) {

	if (this != &Other) {
		AForm::operator=(Other);
		this->_target = Other._target;
	}
	std::cout << "PresidentialPardonForm copy assignment has been called" << std::endl;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm( void ) {

	std::cout << "PresidentialPardonForm Destructor has been called" << std::endl;
}

void		PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	if (!this->isSigned())
		throw GradeTooLowException();
	if (executor.getGrade() > this->getGradeToExecute())
		throw GradeTooLowException();
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
