/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 18:11:46 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/17 11:55:03 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"
// ************************************************************************** //
//                               DOG Class                                    //
// ************************************************************************** //

class Dog : public Animal {


public:

	Dog( void );
	Dog( const Dog &other );
	Dog & operator=( const Dog &Other );
	~Dog( void );

	void	makeSound( void ) const;

private:
	Brain*	_Brain;
};
