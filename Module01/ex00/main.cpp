/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 19:41:57 by ybounite          #+#    #+#             */
/*   Updated: 2025/09/09 19:43:49 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	randomChump( "boo" );


	Zombie	*Zombie1 = newZombie( "Fooo" );
	Zombie1->announce();
	delete Zombie1;

	return 0;
}
