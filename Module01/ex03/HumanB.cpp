/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 15:13:07 by ybounite          #+#    #+#             */
/*   Updated: 2025/09/12 18:38:50 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"


HumanB::HumanB( std::string name ) : _weapon(NULL)
{
	setName( name );

	std:: cout << "HumanB " << name << " created with no weapon" << std::endl;
}

HumanB::~HumanB( void )
{
	std::cout << "HumanB " << getName() << " destroyed" << std::endl;
}

void	HumanB::attack( void )
{
	if ( _weapon )
		std::cout << getName() << " attacks with their " << this->_weapon->getType() << std::endl;
	else
		std::cout << getName() << " has no weapon to attack with!" << std::endl;
}

void	HumanB::setName( std::string name )
{
	this->_name = name;
}

std::string	HumanB::getName( void ) const
{
	return this->_name;
}

void	HumanB::setWeapon( Weapon &weapon )
{
	this->_weapon = &weapon;
}
