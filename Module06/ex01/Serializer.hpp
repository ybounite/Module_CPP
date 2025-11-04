/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 14:40:30 by ybounite          #+#    #+#             */
/*   Updated: 2025/11/03 15:19:41 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
# pragma once 
# include <iostream>
# include <stdint.h>
# include "Data.hpp"


// ************************************************************************** //
//                            Serializer Class                                //
// ************************************************************************** //

class	Serializer {

private:
	Serializer( void );
	Serializer( const Serializer &Other );
	Serializer &operator=( const Serializer &Other );
	~Serializer( void );

public :
	static uintptr_t serialize(Data* ptr);
	static Data*	deserialize(uintptr_t raw);
};
