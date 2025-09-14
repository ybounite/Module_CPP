/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 11:48:37 by ybounite          #+#    #+#             */
/*   Updated: 2025/09/12 15:42:31 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type )
	: _type(type) {}

Weapon::~Weapon( void )
{

}

void			Weapon::setType( std::string type )
{
	this->_type = type;
}

const std::string	&Weapon::getType( void ) const
{
	return this->_type;
}

