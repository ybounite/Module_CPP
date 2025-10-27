/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 14:53:36 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/26 15:37:51 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm( void )
	: AForm("RobotomyRequestForm", 72, 45), _target("Default"){
	std::cout << "RobotomyRequestForm defualt constructor hes been called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( const std::string target )
	: AForm("RobotomyRequestForm", 72, 45), _target(target) {

	std::cout << "RobotomyRequestForm: " << getName() <<" constructor has been called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm &Other )
	: AForm( Other ), _target(Other._target) {
	
	std::cout << "RobotomyRequestForm: " << getName() << " copy constructor has been called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=( const RobotomyRequestForm &Other ){

	if (this != &Other) {
		AForm::operator=(Other);
		this->_target = Other._target;
	}
	std::cout << "RobotomyRequestForm copy assignment has been called" << std::endl;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm( void ) {

	std::cout << "RobotomyRequestForm Destructor has been called" << std::endl;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const{

	if (!this->isSigned())
		throw GradeTooLowException();
	if (executor.getGrade() > this->getGradeToExecute())
		throw GradeTooLowException();

	std::cout << "* drilling noises * tttttthhhhRRRRRRRRRRRRR" << std::endl;
	if (std::rand() % 2 == 0)
		std::cout << "Robotomy failed on " << this->_target << std::endl;
	else
		std::cout << this->_target << " has been robotomized successfully"<< std::endl;
}
