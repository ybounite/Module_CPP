/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 15:44:52 by ybounite          #+#    #+#             */
/*   Updated: 2025/09/12 16:10:30 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


// this rule 
// referaences and const members -> must always be initialized in the constructor's initializ list
HumanA::HumanA( std::string name , Weapon &weapon) : _weapon(weapon)
{
	setName( name );

	std::cout << "HumanA " << getName() << " created with "
		 << this->_weapon.getType() << std::endl;
}

HumanA::~HumanA( void )
{
	std::cout << "HumanA " << getName() << " destroyed" << std::endl;
}

void	HumanA::attack( void )
{
	std::cout << getName() << " attacks with their " << this->_weapon.getType() << std::endl;
}

void	HumanA::setName( std::string name )
{
	this->_name = name;
}

std::string	HumanA::getName( void ) const
{
	return this->_name;
}
