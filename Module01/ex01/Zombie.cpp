/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 14:05:50 by ybounite          #+#    #+#             */
/*   Updated: 2025/09/11 15:30:42 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie( std::string name )
	: _name( name ) {}

Zombie::~Zombie()
{

	std::cout << getName() << " is destroyed 💀" << std::endl;
}

std::string	Zombie::getName( void ) { return Zombie::_name; }

void		Zombie::announce( void )
{

	std::cout <<  getName() << ": BraiiiiiiinnnzzzZ...\n";
}

