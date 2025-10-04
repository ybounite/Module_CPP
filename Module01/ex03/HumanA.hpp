/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 11:50:46 by ybounite          #+#    #+#             */
/*   Updated: 2025/09/12 16:09:49 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include "Weapon.hpp"

// ************************************************************************** //
//                               HumanA Class                                 //
// ************************************************************************** //

class HumanA {


public:

	HumanA( std::string name , Weapon &weapon );
	~HumanA( void );

	void		attack( void );
	void		setName( std::string name );
	std::string	getName( void ) const;

private:

	std::string	_name;
	Weapon		&_weapon;
};

