/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 13:02:48 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/12 15:12:27 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

int	main(){

	std::cout << "---- ScavTrap Tests ----" << std::endl;

	ScavTrap scav1("root");
	ScavTrap scav2("Mr.Robot");

	std::cout << "\n---- attack ---- " << std::endl;

	scav1.attack("Mr.Robot");
	scav2.takeDamage(20);

	std::cout << std::endl;

	scav2.beRepaired(15);
	scav1.beRepaired(5);

	std::cout << std::endl;

	scav1.guardGate();

	std::cout << "--- Copy Constructor Test ---" << std::endl;
	ScavTrap scav3(scav1);
	scav3.attack("Intruder");

	std::cout << std::endl;

	std::cout << "--- Assignment Operator Test ---" << std::endl;
	scav3 = scav2;
	scav3.attack("enemy");

	std::cout << "----- End test ----"<< std::endl;
	return 0;
}
