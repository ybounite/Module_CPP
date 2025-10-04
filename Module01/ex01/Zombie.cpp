/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 14:05:50 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/04 14:57:08 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::~Zombie()
{
	std::cout << "Zombie " << getName() << " is destroyed 💀" << std::endl;
}

void		Zombie::setName( std::string name ) { this->_name = name; }

std::string	Zombie::getName( void ) { return this->_name; }

void		Zombie::announce( void )
{
	std::cout <<  getName() << ": BraiiiiiiinnnzzzZ...\n";
}

