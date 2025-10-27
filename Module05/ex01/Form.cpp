/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 13:09:02 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/25 18:23:27 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"

Form::Form( void ) : _name("default"), _gradToSing(150), _gradToExecute(150), _isSigned(false){

	std::cout << "Form " << getName() << " constructor has been called" << std::endl;
}

Form::Form( const std::string &name, short gradeToSign, short gradeToExecute )
	: _name(name), _gradToSing(gradeToSign), _gradToExecute(gradeToExecute), _isSigned(false) {
	if (_gradToSing <= 0 || _gradToExecute <= 0)
		throw Form::GradeTooLowException();
	if (_gradToSing > 150 || _gradToExecute > 150)
		throw Form::GradeTooHighException();

	std::cout << "Form " << getName() << " constructor has been called" << std::endl;
}

Form::Form( const Form &Other ) : _name(Other._name), _gradToSing(Other._gradToSing), _gradToExecute(Other._gradToExecute) {

	if (_gradToSing <= 0 || _gradToExecute <= 0)
		throw Form::GradeTooLowException();
	if (_gradToSing > 150 || _gradToExecute > 150)
		throw Form::GradeTooHighException();

	std::cout << "Form " << getName() << " copy constructor has been called" << std::endl;
}

Form &Form::operator=( const Form &Other ) {

	if (this != &Other)
		this->_isSigned = Other._isSigned;	
	
	std::cout << "Form " << getName() << " copy assignment has been called" << std::endl;
	return *this;
}

Form::~Form( void ) {

	std::cout << "Form " << getName() << " Destructor has been called" << std::endl;
}

std::string	Form::getName( void ) const { return _name; }
int		Form::getGradeToSign( void ) const { return _gradToSing; }
int		Form::getGradeToExecute( void ) const { return _gradToExecute; }
bool		Form::isSigned( void ) const { return _isSigned; }

void		Form::beSigned( Bureaucrat &Bur ) {

	if (Bur.getGrade() > getGradeToSign())
		throw Form::GradeTooLowException();
	this->_isSigned = true;
}

const char *Form::GradeTooHighException::what() const throw() {

	return "Form: grad too high";
}

const char *Form::GradeTooLowException::what() const throw() {

	return "Form: grad too low!";
}

std::ostream	&operator<<( std::ostream &os, const Form &form ){
	os << "Form \"" << form.getName() << "\""
        << " [Signed: " << (form.isSigned() ? "Yes" : "No")
        << ", Grade to sign: " << form.getGradeToSign()
        << ", Grade to execute: " << form.getGradeToExecute() << "]";
	return os;
}
