/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 12:59:12 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/12 18:55:39 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) {

	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
	std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap( name ){

	std::cout << "ScavTrap " << getName() << " is created" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap &Other ) : ClapTrap( Other ){

	std::cout << "ScravTrap copy constructor called" << std::endl;
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

	std::cout << "ScavTrap " << getName() << " is destructor" << std::endl;
}

void	ScavTrap::attack( const std::string& target ) {

	std::cout << "ScavTrap " << getName();
	if (this->_HitPoints <= 0) {
		std::cout << " can't attack becouse it's destroyed!" << std::endl;
		return ;
	}
	if (this->_EnergyPoints <= 0) {
		std::cout << " hase no energy left to attack!" << std::endl;
		return ;
	}

	std::cout << " attacks " + target + ", causing " << this->_AttackDamage
		<< " points of damage!" << std::endl;
	this->_EnergyPoints--;
}

void		ScavTrap::guardGate( void ) {

	if(this->_EnergyPoints <= 0|| this->_HitPoints <= 0)
		std::cout << "ScavTrap " << getName() << " cannot enter gate guard mode because " << getName() << " is dead." << std::endl;
	else
		std::cout << "ScavTrap " << getName() << " has entered Get keeper mode!" << std::endl;
}
