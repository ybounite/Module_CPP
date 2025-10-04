/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 15:29:11 by ybounite          #+#    #+#             */
/*   Updated: 2025/09/14 18:00:19 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include <fstream>

// ************************************************************************** //
//                               Replace Class                                //
// ************************************************************************** //

class Replace {


public:

	Replace( std::string Filename, std::string S1, std::string S2 );
	~Replace( void );
	
	std::string	getFilename( void );
	bool		process( void );
	bool		isValidString( void );
private:
	std::string	_Filename;
	std::string	_S1;
	std::string	_S2;
};

