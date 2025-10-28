/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 18:21:51 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/27 19:04:19 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Intern.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"

Intern::Intern( void ) {

	for (short i = 0; i < 3; i++)
		this->Forms[i] = NULL;
	std::cout << "Intern Default constructor has been called" << std::endl;
}

Intern::Intern( const Intern &Other ) {
	(void)Other;
	std::cout << "Intern copy constructor has been called" << std::endl;
}

Intern &Intern::operator=( const Intern &Other ) {
	(void)Other;
	std::cout << "Intern copy assignment has been called" << std::endl;
	return *this;
}

Intern::~Intern( void ) {
	for (short index = 0; index < 3; index++)
		delete Forms[index];
	std::cout << "Intern Destructor has been called" << std::endl;
}

AForm	*Intern::makeForm(const std::string &FormName, const std::string &target){

	std::string	AllFormsNames[3] = {
		"robotomy request",
		"persidential pardon",
		"shrubbery creation"};
	if (!Forms[0])
		this->Forms[0] =  new RobotomyRequestForm(target);
	if (!Forms[1])
		this->Forms[1] = new PresidentialPardonForm(target);
	if (!Forms[2])
		this->Forms[2] = new ShrubberyCreationForm(target);
	for (short idex = 0; idex < 3; idex++) {
		if (FormName == AllFormsNames[idex]) {
			std::cout << GREEN << "\nIntern create " << FormName << RESET << std::endl;
			return Forms[idex];
		}
	}
	std::cout << RED << "\nIntern couldn’t create form: " << FormName << RESET << std::endl;
	return NULL;
}
