/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 11:54:56 by ybounite          #+#    #+#             */
/*   Updated: 2025/09/12 18:36:57 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# ifndef __HumanB_H__
# define __HumanB_H__

# include <iostream>
# include <string>
# include "Weapon.hpp"

// ************************************************************************** //
//                               HumanB Class                                 //
// ************************************************************************** //

class HumanB {


public:

	HumanB( std::string name );
	~HumanB( void );

	void		attack( void );
	void		setWeapon( Weapon &weapon );
	void		setName( std::string name );
	std::string	getName( void ) const;

private:
	std::string	_name;
	Weapon		*_weapon;
};

#endif
