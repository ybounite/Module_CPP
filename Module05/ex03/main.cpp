/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 10:07:05 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/27 19:03:56 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Intern.hpp"
# include "Bureaucrat.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

int	main() {
	try {
		std::cout << BLUE << "---- Create Bureaucrat ----" << RESET << std::endl;
		Bureaucrat root("root", 2);

		std::cout << BLUE << "\n---- Create Intern ----" << RESET << std::endl;
		Intern someRandomIntern;

		AForm	*form = someRandomIntern.makeForm("robotomy request", "Bender");
		AForm	*test = someRandomIntern.makeForm("shrubbery creation", "Bender");
		if (!form || !test)
			throw std::bad_alloc();

		std::cout << GREEN << "\n*** root signs form ***" << RESET << std::endl;
		form->beSigned(root);
		test->beSigned(root);
		std::cout << *form << std::endl;
		std::cout << *test << std::endl;
		std::cout << GREEN << "\n*** root executes form ***" << RESET << std::endl;
		form->execute(root);
		test->execute(root);
		std::cout << std::endl;
	}
	catch (const std::exception &ex) {
		std::cout << RED << "Exception: " << ex.what() << RESET << std::endl;
	}
	return 0;
}
