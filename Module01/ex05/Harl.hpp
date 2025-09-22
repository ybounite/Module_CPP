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

	Harl( void );
	~Harl( void );

	void		complain( std::string level );

private:

	void		debug( void );
	void		info( void );
	void		warning( void );
	void		error( void );

};

#endif
