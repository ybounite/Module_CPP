/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 09:17:25 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/14 09:43:31 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include "ClapTrap.hpp"
// ************************************************************************** //
//                               FRAGTRAP Class                               //
// ************************************************************************** //

class FragTrap : virtual public ClapTrap {

public:

	FragTrap( void );
	FragTrap( std::string name );
	FragTrap( const FragTrap &Other );
	FragTrap	&operator=( const FragTrap &Other );
	~FragTrap( void );

	void	highFivesGuys(void);
};
