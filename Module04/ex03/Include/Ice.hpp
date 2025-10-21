/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 08:47:26 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/21 08:47:27 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Header.hpp"

class Ice : public AMateria {

public:

	Ice();
	Ice( const Ice &Other);
	Ice &operator=(const Ice &Other);
	~Ice();
	void use(ICharacter& target);
	AMateria* clone() const;

};
