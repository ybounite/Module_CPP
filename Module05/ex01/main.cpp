/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 10:07:05 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/25 17:59:14 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
#include "Form.hpp"

int	main() {
	try {
		Bureaucrat alice("Alice", 1);
		Bureaucrat alix("Alix", 150);

		Form contractHigh("TopSecret", 1, 30);
		Form contractMid("MidLevel", 10, 20);
		Form contractLow("LowLevel", 140, 50);

		std::cout << "\n===== INITIAL STATE =====" << std::endl;
		std::cout << alice << std::endl;
		std::cout << alix << std::endl;
		std::cout << contractHigh << std::endl;
		std::cout << contractMid << std::endl;
		std::cout << contractLow << std::endl;

		std::cout << "\n===== SIGNING ATTEMPTS =====" << std::endl;

		alice.signForm(contractMid);

		alix.signForm(contractLow);

		alice.signForm(contractHigh);

		alix.signForm(contractHigh);

		std::cout << "\n===== FINAL STATE =====" << std::endl;
		std::cout << contractHigh << std::endl;
		std::cout << contractMid << std::endl;
		std::cout << contractLow << std::endl;

	} catch (const std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}

	return 0;
}
