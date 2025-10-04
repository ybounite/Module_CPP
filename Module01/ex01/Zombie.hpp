/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 13:30:05 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/04 14:56:58 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
// ************************************************************************** //
//                               Zombie Class                                 //
// ************************************************************************** //


class Zombie {


public:

	Zombie( void );
	~Zombie( void );

	void		announce( void );
	void		setName( std::string name );
	std::string	getName( void );

private:
	std::string	_name;
};

Zombie		*newZombie( std::string name );
Zombie*		zombieHorde( int N, std::string name );

