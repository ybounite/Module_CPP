/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 11:50:29 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/12 16:26:07 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

# include <iostream>
# include <string>
# include "ClapTrap.hpp"
// ************************************************************************** //
//                               SCAVTRAP Class                               //
// ************************************************************************** //

class ScavTrap : virtual public ClapTrap {

public:

	ScavTrap( void );
	ScavTrap( std::string name );
	ScavTrap( const ScavTrap &Other );
	ScavTrap	&operator=( const ScavTrap &Other );
	~ScavTrap( void );

	void		guardGate();
};
