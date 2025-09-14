/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 11:43:11 by ybounite          #+#    #+#             */
/*   Updated: 2025/09/12 15:42:40 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# ifndef __WEAPON_H__
# define __WEAPON_H__

# include <iostream>
# include <string>
// ************************************************************************** //
//                               Weapon Class                                 //
// ************************************************************************** //

class Weapon {


public:

	Weapon( std::string type );
	~Weapon( void );

	void		setType( std::string type );
	const std::string	&getType( void ) const;

private:

	std::string	_type;
};

#endif
