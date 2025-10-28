/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 10:07:05 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/25 12:05:17 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"


int	main() {
	try {
		Bureaucrat	bureacrate1("Mr.Robot", 1);

		std::cout << bureacrate1 << std::endl;
		bureacrate1.incrementGrade();
	}
	catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat	bureacrate2("ba9ba9", 150);
		
		std::cout << bureacrate2 << std::endl;
		bureacrate2.decrementGrade();
	}
	catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
