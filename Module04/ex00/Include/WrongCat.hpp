/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 16:02:18 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/16 17:19:05 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include "WrongAnimal.hpp"
// ************************************************************************** //
//                               WRONGCAT Class                               //
// ************************************************************************** //

class WrongCat : public WrongAnimal {


public:

	WrongCat( void );
	WrongCat( const WrongCat &other );
	WrongCat & operator=( const WrongCat &Other );
	~WrongCat( void );

	void	makeSound( void );

};
