/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 08:39:26 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/21 08:43:35 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../Include/IMateriaSource.hpp"

IMateriaSource::IMateriaSource() {

}

IMateriaSource::IMateriaSource( const IMateriaSource &Other ) {

	if (this != &Other)
		*this = Other;
}

IMateriaSource & IMateriaSource::operator=( const IMateriaSource &Other ){

	if (this != &Other)
		*this = Other;
	return *this;
}

IMateriaSource::~IMateriaSource() {

}
