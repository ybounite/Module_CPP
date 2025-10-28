/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 10:07:05 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/27 18:02:22 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

int	main() {
	std::cout << GREEN << "ShrubberyCreationForm :" << std::endl
		<< GREEN << "  Shrubbery Test high grade to execute " << RESET << std::endl;
	try {
		std::cout << BLUE << "<-- Create Bureaucrat -->" << RESET << std::endl;
		Bureaucrat sudo("sudo", 137);
		std::cout << BLUE << "<-- Bureaucrat status -->" << RESET << std::endl;
		std::cout << sudo << std::endl;

		ShrubberyCreationForm form("my");
		std::cout << BLUE << "\n<-- Signing Forms status -->" << RESET << std::endl;
		form.beSigned(sudo);
		sudo.signForm(form);
		std::cout << BLUE << "\n<-- Forms after signing -->" << RESET << std::endl;
		std::cout << form << std::endl;

		std::cout << GREEN << "\n*** Executing ShrubberyCreationForm ***" << RESET << std::endl;
		form.execute(sudo);
	}
	catch (const std::exception &e) {
		std::cout << RED << e.what() << RESET << std::endl;
	}

	std::cout << GREEN << "\nRobotomyRequestForm :" << std::endl
		  << RED << "  Test low grade" << RESET << std::endl;
	try {
		std::cout << BLUE << "<-- Create Bureaucrat -->" << RESET << std::endl;
		Bureaucrat citizen("citizen", 140);
		std::cout << BLUE << "<-- Bureaucrat status -->" << RESET << std::endl;
		std::cout << citizen << std::endl;

		RobotomyRequestForm form("robot");
		std::cout << BLUE << "\n<-- Signing Forms status -->" << RESET << std::endl;
		form.beSigned(citizen);
		citizen.signForm(form);
		std::cout << BLUE << "\n<-- Forms after signing -->" << RESET << std::endl;
		std::cout << form << std::endl;

		std::cout << GREEN << "\n*** Executing RobotomyRequestForm ***" << RESET << std::endl;
		form.execute(citizen);
	}
	catch (const std::exception &e) {
		std::cout << RED << e.what() << RESET << std::endl;
	}

	std::cout << GREEN << "\nPresidentialPardonForm :" << std::endl
		  << GREEN << "*** Test high grade to execute ***" << RESET << std::endl;
	try {
		std::cout << BLUE << "<-- Create Bureaucrat -->" << RESET << std::endl;
		Bureaucrat parliament("akhnouch", 2);
		std::cout << BLUE << "<-- Bureaucrat status -->" << RESET << std::endl;
		std::cout << parliament << std::endl;

		std::cout << BLUE << "<-- Create PresidentialPardonForm -->" << RESET << std::endl;
		PresidentialPardonForm form("weld aicha");

		std::cout << GREEN << "\n*** Parliament signs form ***" << RESET << std::endl;
		form.beSigned(parliament);
		std::cout << BLUE << "\n<-- Signing Forms status -->" << RESET << std::endl;
		std::cout << form << std::endl;

		std::cout << GREEN << "\n*** Parliament executes form ***" << RESET << std::endl;
		form.execute(parliament);
	}
	catch (const std::exception &e) {
		std::cout << RED << e.what() << RESET << std::endl;
	}

	std::cout << GREEN << "\nPresidentialPardonForm :" << RESET << std::endl;
	std::cout << RED << "*** Test low grade to execute ***" << RESET << std::endl;
	try {
		std::cout << BLUE << "<-- Create Bureaucrat -->" << RESET << std::endl;
		Bureaucrat citizen("citizen", 25);
		std::cout << BLUE << "<-- Bureaucrat status -->" << RESET << std::endl;
		std::cout << citizen << std::endl;

		std::cout << BLUE << "<-- Create PresidentialPardonForm -->" << RESET << std::endl;
		PresidentialPardonForm form("beznaz");

		form.beSigned(citizen);
		std::cout << GREEN << "\n*** Citizen signs form ***" << RESET << std::endl;
		citizen.signForm(form);

		std::cout << BLUE << "\n<-- Signing Forms status -->" << RESET << std::endl;
		std::cout << form << std::endl;

		std::cout << RED << "\n*** Citizen tries to execute form (should fail) ***" << RESET << std::endl;
		form.execute(citizen);
	}
	catch (const std::exception &e) {
		std::cout << RED << e.what() << RESET << std::endl;
	}
	return 0;
}
