/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 11:03:14 by ybounite          #+#    #+#             */
/*   Updated: 2025/09/12 16:11:22 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "HumanA.hpp"
#include "Weapon.hpp"

int main()
{
	{
	Weapon club = Weapon("crude spiked club");
	HumanA bob("HumanA", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();
	}

	{
	Weapon club = Weapon("crude spiked club");
	HumanB jim("HumanB");
	jim.setWeapon(club);
	jim.attack();
	club.setType("some other type of club");
	jim.attack();
	}

	return 0;
}
