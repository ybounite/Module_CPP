/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 08:34:43 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/21 08:39:04 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../Include/Header.hpp"


ICharacter::ICharacter() {

}

ICharacter::ICharacter( const ICharacter &Other ) {
	*this = Other;
}

ICharacter & ICharacter::operator=( const ICharacter &Other) {
	if (this != &Other)
		*this = Other;
	return *this;
}

ICharacter::~ICharacter() {

}
