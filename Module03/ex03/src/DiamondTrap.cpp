/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 09:19:13 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/14 16:15:42 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../Include/DiamondTrap.hpp"
	
DiamondTrap::DiamondTrap( void ) {

	std::cout << "DiamondTrap Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap( std::string name )
	: ClapTrap( name + "_clap_name" ), ScavTrap( name ), FragTrap( name ), _Name( name ) {

	this->_Name = name;
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 30;
	std::cout << "DiamondTrap costructor called" << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap &Other )
	: ClapTrap( Other ), ScavTrap( Other ), FragTrap( Other ) {

	this->_Name = Other._Name;
	std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap & DiamondTrap::operator=( const DiamondTrap &Other ) {

	std::cout << "DiamondTrap Copy assignment operator called" << std::endl;
	this->_Name = Other._Name;
	this->ClapTrap::_Name = Other.ClapTrap::_Name;
	this->_HitPoints = Other._HitPoints;
	this->_EnergyPoints = Other._EnergyPoints;
	this->_AttackDamage = Other._AttackDamage;
	return *this;
}

DiamondTrap::~DiamondTrap( void ) {

	std::cout << "DiamondTrap " << _Name << " is destroyed 💀" << std::endl;
}

void	DiamondTrap::attack(const std::string& target) {
	ScavTrap::attack( target );
}

void	DiamondTrap::whoAmI( void ) {

    std::cout << "I am DiamondTrap named \"" << this->_Name 
              << "\" and my ClapTrap name is \"" << this->ClapTrap::_Name 
              << "\"" << std::endl;

}
