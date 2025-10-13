/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 20:21:58 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/12 11:50:08 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
// ************************************************************************** //
//                               CLAPTRAP Class                               //
// ************************************************************************** //

class ClapTrap {


public:

	ClapTrap( void );
	ClapTrap( std::string name );
	ClapTrap( const ClapTrap &other );
	ClapTrap & operator=( const ClapTrap &Other );
	~ClapTrap( void );

	void attack( const std::string& target );
	void takeDamage( unsigned int amount );
	void beRepaired( unsigned int amount );
	std::string	getName( void ) const;

private:
	
	std::string	_Name;
	int		_HitPoints;
	int		_EnergyPoints;
	int		_AttackDamage;
};
