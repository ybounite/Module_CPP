/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 13:27:37 by ybounite          #+#    #+#             */
/*   Updated: 2025/09/11 18:37:16 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{

	int NbOfZombie = 10;
	Zombie* Horde = zombieHorde(NbOfZombie, "Moar brainz");


	for (int i = 0; i < NbOfZombie; i++){
		Horde[i].announce();
	}
	delete [] Horde;
	return 0;
}
