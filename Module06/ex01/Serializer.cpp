/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 18:43:48 by ybounite          #+#    #+#             */
/*   Updated: 2025/11/03 15:18:51 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Serializer.hpp"

Serializer::Serializer( void ) {}

Serializer::Serializer( const Serializer &Other ) { (void)Other; }

Serializer	&Serializer::operator=( const Serializer &Other ) {
	(void)Other;
	return *this;
}

Serializer::~Serializer( void ) {}

uintptr_t	Serializer::serialize(Data* ptr) {

	return reinterpret_cast<uintptr_t>(ptr);
}

Data*		Serializer::deserialize(uintptr_t raw) {

	return reinterpret_cast<Data *>(raw);
}
