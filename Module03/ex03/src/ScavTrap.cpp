/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 12:59:12 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/14 16:08:18 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Include/ScavTrap.hpp"

ScavTrap::ScavTrap( void ) {

	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
	std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap( name ) {

	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap &Other ) : ClapTrap( Other) {

	std::cout << "ScravTrap copy constructor called " << std::endl;
}

ScavTrap	&ScavTrap::operator=( const ScavTrap &Other ) {

	this->_Name = Other._Name;
	this->_HitPoints = Other._HitPoints;
	this->_EnergyPoints = Other._EnergyPoints;
	this->_AttackDamage = Other._AttackDamage;
	std::cout << "ScravTrap copy assignment operator called" << std::endl;
	return *this;
}

ScavTrap::~ScavTrap( void ) {

	std::cout << "ScavTrap " << getName() << " is destroyed 💀" << std::endl;
}

void		ScavTrap::guardGate( void ) {

	std::cout << "ScavTrap " << getName() << " has entered Get keeper mode!" << std::endl;
}
