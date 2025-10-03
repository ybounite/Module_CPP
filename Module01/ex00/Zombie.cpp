/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 18:19:05 by ybounite          #+#    #+#             */
/*   Updated: 2025/09/10 19:06:00 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie::Zombie( std::string name ) : _name(name)
{
	std::cout << "Zombie object " << this->_name << " created" << std::endl;
}

Zombie::~Zombie( void )
{
	std::cout << this->_name << " is destroyed 💀" << std::endl;
}

void	Zombie::announce( void )
{
	std::cout <<  this->_name << ": BraiiiiiiinnnzzzZ...\n";
}
