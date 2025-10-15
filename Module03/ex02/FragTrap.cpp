/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 09:16:41 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/13 15:14:16 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap() {

	this->_HitPoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
	std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name) {

	this->_HitPoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
	std::cout << "FragTrap " << getName() << " is created" << std::endl;
}

FragTrap::FragTrap( const FragTrap &Other ) : ClapTrap(Other) {
	
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap	&FragTrap::operator=( const FragTrap &Other ) {

	std::cout << "FragTrap copy assignment constructor called" << std::endl;
	this->ClapTrap::operator=(Other);
	return *this;
}

FragTrap::~FragTrap( void ) {

    std::cout << "FragTrap " << getName() << " is destroyed" << std::endl; 
}

void	FragTrap::highFivesGuys( void ) {
	if(this->_EnergyPoints <= 0|| this->_HitPoints <= 0)
		std::cout << "FragTrap " << this->_Name << " asks for a positive high-five" << std::endl;
	else
		std::cout << "FragTrap " << this->_Name << " can't ask for a positive high-five because " << this->_Name << " is dead" << std::endl;
}
