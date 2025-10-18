/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 10:00:35 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/16 17:23:38 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
// ************************************************************************** //
//                               WRONGANIMAL Class                            //
// ************************************************************************** //

class WrongAnimal {


public:

	WrongAnimal( void );
	WrongAnimal( const WrongAnimal &other );
	WrongAnimal & operator=( const WrongAnimal &Other );
	~WrongAnimal( void );

	const std::string	getType( void ) const;
	void			setType( std::string type );
	void	makeSound( void );

protected:
	std::string	_type;
};
