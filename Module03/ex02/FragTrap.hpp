/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 09:17:25 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/13 09:32:39 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include "ClapTrap.hpp"
// ************************************************************************** //
//                               SCAVTRAP Class                               //
// ************************************************************************** //

class FragTrap : public ClapTrap {

public:

	FragTrap( void );
	FragTrap( std::string name );
	FragTrap( const FragTrap &Other );
	FragTrap	&operator=( const FragTrap &Other );
	~FragTrap( void );

	void	highFivesGuys(void);
};
