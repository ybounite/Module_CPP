/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:50:42 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/14 16:13:27 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../Include/DiamondTrap.hpp"

int	main() {
	
	std::cout << "===== DiamondTrap Testes ====" << std::endl;
	DiamondTrap TrapOne("youssef");
	DiamondTrap Traptwo("Mr.Robot");

	std::cout << std::endl;
	TrapOne.whoAmI();
	Traptwo.whoAmI();

	TrapOne.attack("Mr.Robot");

	TrapOne.beRepaired(20);
	Traptwo.beRepaired(10);

	std::cout << "--- Energy Exhaustion Test ---" << std::endl;
	for (int i = 0; i < 10; ++i)
		TrapOne.attack("training dummy");
	TrapOne.highFivesGuys();
	TrapOne.guardGate();

	std::cout << std::endl;
	DiamondTrap	Trapthree(TrapOne);

	Trapthree.whoAmI();
	

	std::cout << std::endl;
	Trapthree = TrapOne;
	Trapthree.whoAmI();	

	std::cout << std::endl;
	return 0;
}
