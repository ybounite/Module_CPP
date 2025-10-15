/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 09:19:19 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/14 09:56:57 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
// ************************************************************************** //
//                               DIAMONDTRAP Class                            //
// ************************************************************************** //

class DiamondTrap : public ScavTrap , public FragTrap {


public:

	DiamondTrap( void );
	DiamondTrap( std::string name );
	DiamondTrap( const DiamondTrap &Other );
	DiamondTrap & operator=( const DiamondTrap &Other );
	~DiamondTrap( void );

	void	attack( const std::string& target );
	void	whoAmI( void );
private:

	std::string	_Name;
};
