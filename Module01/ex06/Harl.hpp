/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 09:19:57 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/04 09:20:17 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>


// ************************************************************************** //
//                               Harl Class                                   //
// ************************************************************************** //

class Harl {


public:

	Harl( void );
	~Harl( void );

	void		complain( std::string level );

private:

	void		debug( void );
	void		info( void );
	void		warning( void );
	void		error( void );

};

enum enTypeLevel{
	enDebug,
	enInfo,
	enWarning,
	enError,
	enUnknown
};

enTypeLevel getTypeLevel( std::string );

