/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 19:40:32 by ybounite          #+#    #+#             */
/*   Updated: 2025/09/10 18:50:15 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# ifndef __ZOMBIE_H__
# define __ZOMBIE_H__

# include <iostream>
# include <string>
// ************************************************************************** //
//                               Zombie Class                                 //
// ************************************************************************** //

class Zombie {


public:

	Zombie( std::string name );
	~Zombie( void );

	void		announce( void );

private:

	std::string	_name;
};

Zombie		*newZombie( std::string name );
void		randomChump( std::string name );

#endif
