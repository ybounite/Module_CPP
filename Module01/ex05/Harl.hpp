/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 17:58:23 by ybounite          #+#    #+#             */
/*   Updated: 2025/09/14 18:13:41 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# ifndef __HARL_H__
# define __HARL_H__

# include <iostream>
# include <string>

// ************************************************************************** //
//                               Harl Class                                   //
// ************************************************************************** //

class Harl {


public:

	Harl( std::string Filename, std::string S1, std::string S2 );
	~Harl( void );

	void		debug( void );
	void		info( void );
	void		warning( void );
	void		error( void );

	void		complain( std::string level );
	//
	std::string	getFilename( void );
	bool		process( void );
	bool		isValidString( void );

private:
	std::string	_Filename;
	std::string	_S1;
	std::string	_S2;
};

#endif
