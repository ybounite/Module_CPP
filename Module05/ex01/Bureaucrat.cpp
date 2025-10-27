/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 17:48:54 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/27 17:48:55 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "Form.hpp"

Bureaucrat::Bureaucrat() : _name("Default"), _grad(150) {
	
	std::cout << "Breacurat " << getName() << " consterctor has been called" << std::endl;
}

Bureaucrat::Bureaucrat( const std::string name, const short grad ) : _name(name){

	setGrade(grad);
	std::cout << "Breacurat " << getName() << " consterctor has been called" << std::endl;
}

Bureaucrat::Bureaucrat( const Bureaucrat &Other ) : _name(Other.getName()), _grad(Other.getGrade()){
	
	std::cout << "Breacurat " << getName() << " copy consterctor has been called" << std::endl;
}

Bureaucrat & Bureaucrat::operator=( const Bureaucrat &Other ) {

	if (this != &Other) {
		this->setGrade(Other.getGrade());
	}
	std::cout << "Breacurat " << getName() << " copy assignment has been called" << std::endl;
	return *this;
}

Bureaucrat::~Bureaucrat() {
	
	std::cout << "Breacurat " << getName() << " Destructor has been called" << std::endl;
}

void		Bureaucrat::setGrade( const short grad ) {
	if (grad <= 0)
		throw GradeTooLowException();
	else if (grad > 150)
		throw GradeTooHighException();
	this->_grad = grad;
}

std::string	Bureaucrat::getName( void ) const { return _name; }
short		Bureaucrat::getGrade( void ) const { return _grad; }

void		Bureaucrat::incrementGrade() {

	if (this->getGrade() <= 1)
		throw GradeTooHighException();
	--_grad;
}

void		Bureaucrat::decrementGrade() {

	if (_grad >= 150)
		throw GradeTooLowException();
	++_grad;
}

const char *Bureaucrat::GradeTooHighException::what() const _GLIBCXX_NOTHROW {
	return "Bureaucrat grade is too high!";
}

const char *Bureaucrat::GradeTooLowException::what() const _GLIBCXX_NOTHROW {
    return "Bureaucrat grade is too low!";
}

void		Bureaucrat::signForm( Form &form ) {
	try {
		form.beSigned(*this);
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	}
	catch (std::exception &error ) {
		std::cout << this->getName() << " couldn't sign " << form.getName()
			<< " because " << error.what() << std::endl;
	}
}

std::ostream	&operator<<( std::ostream &COUT, Bureaucrat &Bur ) {
	COUT << Bur.getName() << ", bureaucrat grade " << Bur.getGrade() << std::endl;
	return COUT;
}
