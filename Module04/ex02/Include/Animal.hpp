/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 16:10:06 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/15 19:01:44 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
// ************************************************************************** //
//                               ANIMAL Class                               //
// ************************************************************************** //

class Animal {


public:

	Animal( void );
	Animal( std::string name );
	Animal( const Animal &other );
	Animal & operator=( const Animal &Other );
	virtual ~Animal( void );

	virtual void		makeSound( void ) const = 0;
	const std::string	getType( void ) const;
	void			setType( const std::string type );

protected:
	std::string	_type;
	
};
