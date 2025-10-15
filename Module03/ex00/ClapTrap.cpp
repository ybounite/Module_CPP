/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 09:45:54 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/12 11:25:19 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void )
	: _Name("Defaulr"), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0) {
	std::cout << getName() << " constructor called" << std::endl;
}


ClapTrap::ClapTrap( std::string name )
	: _Name(name), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0) {
	std::cout << "ClapTrap constructor called for " << getName() << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &Other ) {
	std::cout << "ClapTrap Copy constructor called for " << getName() << std::endl;
	this->_Name = Other._Name;
	this->_HitPoints = Other._HitPoints;
	this->_EnergyPoints = Other._EnergyPoints;
	this->_AttackDamage = Other._AttackDamage;
}

ClapTrap & ClapTrap::operator=( const ClapTrap &Other ) {
	
	this->_Name = Other._Name;
	this->_HitPoints = Other._HitPoints;
	this->_EnergyPoints = Other._EnergyPoints;
	this->_AttackDamage = Other._AttackDamage;
	std::cout << "Copy assignment operator called for " << getName() << std::endl;
	return *this;
}

ClapTrap::~ClapTrap( void ) {
	std::cout << "ClapTrap " << getName() << " has been destroyed." << std::endl;
}

std::string	ClapTrap::getName( void ) const { return this->_Name; }

void	ClapTrap::attack( const std::string& target ) {

	std::cout << "ClapTrap " << getName();
	if (this->_HitPoints <= 0) {
 		std::cout << "ClapTrap " << getName() << " all ready dead" << std::endl;
		return ;
	}
	if (this->_EnergyPoints <= 0) {
		std::cout << " hase no energy left to attack!" << std::endl;
		return ;
	}

	this->_EnergyPoints--;
	std::cout << " attacks " + target + ", causing " << this->_AttackDamage
		<< " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage( unsigned int amount ) {
	std::cout << "ClapTrap " << getName();
	if (this->_HitPoints <= 0) {
		std::cout << " can't attack becouse it's dead!" << std::endl;
		return ;
	}
	this->_HitPoints -= amount;
	if (this->_HitPoints <= 0)
		this->_HitPoints = 0;

	std::cout << " takes " << amount << " points of damage! "
		<< "Remaining HP: " << this->_HitPoints << std::endl;
	if (this->_HitPoints == 0)
		std::cout << "ClapTrap " << getName() << " is dead" << std::endl;
}

void	ClapTrap::beRepaired( unsigned int amount ) {
	std::cout << "ClapTrap " << getName();
	if (this->_HitPoints <= 0) {
		std::cout << " can't repair itself becouse it's dead!" << std::endl;
		return ;
	}
	if (this->_EnergyPoints <= 0) {
		std::cout << " has no energy left to repair!" << std::endl;
		return ;
	}
	this->_HitPoints += amount;
	this->_EnergyPoints--;
	std::cout << " repairs itself, gaining " << amount << " hit points! "
		<< "HP is now " << this->_HitPoints 
		<< ", Energy left: " << this->_EnergyPoints << std::endl;
}

