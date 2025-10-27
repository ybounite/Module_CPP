/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 14:09:24 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/26 15:23:17 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void )
	: AForm("ShrubberyCreationForm", 145, 137), _target("Default"){

	std::cout << "ShrubberyCreationForm defualt constructor hes been called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const std::string &target )
	: AForm("ShrubberyCreationForm", 145, 137), _target(target) {

	std::cout << "ShrubberyCreationForm: " << getName() <<" constructor has been called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &Other )
	: AForm( Other ), _target(Other._target) {
	
	std::cout << "ShrubberyCreationForm: " << getName() << " copy constructor has been called" << std::endl;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=( const ShrubberyCreationForm &Other ) {

	if (this != &Other) {
		AForm::operator=(Other);
		this->_target = Other._target;
	}
	std::cout << "ShrubberyCreationForm copy assignment has been called" << std::endl;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void ){
	std::cout << "ShrubberyCreationForm Destructor has been called" << std::endl;
}

const char	*ShrubberyCreationForm::ErrorCearteFile::what() const throw() {
	return "Cannot Create output file!";
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
	if (!this->isSigned())
		throw GradeTooLowException();
	if (executor.getGrade() > this->getGradeToExecute())
		throw GradeTooLowException();

	std::ofstream	File( (this->_target + "_shrubbery").c_str());
	
	if (!File.is_open()) 
		throw ShrubberyCreationForm::ErrorCearteFile();


	File << "       _-_" << std::endl;
	File << "    /~~   ~~\\" << std::endl;
	File << " /~~         ~~\\" << std::endl;
	File << "{               }" << std::endl;
	File << " \\  _-     -_  /" << std::endl;
	File << "   ~  \\\\ //  ~" << std::endl;
	File << "_- -   | |   - _" << std::endl;
	File << "  _ -  | |  - _ " << std::endl;
	File << "      // \\\\" << std::endl;
	File << std::endl;

	std::cout << executor.getName() << " executed " << getName() << std::endl;
	File.close();
}
