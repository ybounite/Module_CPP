/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 13:09:02 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/26 13:22:24 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AForm.hpp"

AForm::AForm( void ) : _name("default"), _gradToSing(150), _gradToExecute(150), _isSigned(false){

	std::cout << "AForm " << getName() << " constructor has been called" << std::endl;
}

AForm::AForm( const std::string &name, short gradeToSign, short gradeToExecute )
	: _name(name), _gradToSing(gradeToSign), _gradToExecute(gradeToExecute), _isSigned(false) {
	if (_gradToSing <= 0 || _gradToExecute <= 0)
		throw AForm::GradeTooLowException();
	if (_gradToSing > 150 || _gradToExecute > 150)
		throw AForm::GradeTooHighException();

	std::cout << "AForm " << getName() << " constructor has been called" << std::endl;
}

AForm::AForm( const AForm &Other ) : _name(Other._name), _gradToSing(Other._gradToSing), _gradToExecute(Other._gradToExecute) {

	if (_gradToSing <= 0 || _gradToExecute <= 0)
		throw AForm::GradeTooLowException();
	if (_gradToSing > 150 || _gradToExecute > 150)
		throw AForm::GradeTooHighException();

	std::cout << "AForm " << getName() << " copy constructor has been called" << std::endl;
}

AForm &AForm::operator=( const AForm &Other ) {

	if (this != &Other)
		this->_isSigned = Other._isSigned;	
	
	std::cout << "AForm " << getName() << " copy assignment has been called" << std::endl;
	return *this;
}

AForm::~AForm( void ) {

	std::cout << "AForm " << getName() << " Destructor has been called" << std::endl;
}

std::string	AForm::getName( void ) const { return _name; }
int		AForm::getGradeToSign( void ) const { return _gradToSing; }
int		AForm::getGradeToExecute( void ) const { return _gradToExecute; }
bool		AForm::isSigned( void ) const { return _isSigned; }

void		AForm::beSigned( Bureaucrat &Bur ) {

	if (Bur.getGrade() > getGradeToSign())
		throw AForm::GradeTooLowException();
	this->_isSigned = true;
}

const char *AForm::GradeTooHighException::what() const throw() {

	return "AForm: grad too high";
}

const char *AForm::GradeTooLowException::what() const throw() {

	return "AForm: grad too low!";
}

std::ostream	&operator<<( std::ostream &os, const AForm &form ){
	os << "AForm \"" << form.getName() << "\""
        << " [Signed: " << (form.isSigned() ? "Yes" : "No")
        << ", Grade to sign: " << form.getGradeToSign()
        << ", Grade to execute: " << form.getGradeToExecute() << "]";
	return os;
}

