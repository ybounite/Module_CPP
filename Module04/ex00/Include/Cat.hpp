/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 18:09:39 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/15 18:56:08 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include "Animal.hpp"
// ************************************************************************** //
//                               CAT Class                                    //
// ************************************************************************** //

class Cat : public Animal {


public:

	Cat( void );
	Cat( const Cat &other );
	Cat & operator=( const Cat &Other );
	~Cat( void );


	void	makeSound( void ) const;
};
