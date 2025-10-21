/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 08:47:04 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/21 08:47:05 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Header.hpp"
class Cure : public AMateria {

public:
	Cure();
	Cure( const Cure &Other);
	Cure & operator=(const Cure &Other);
	~Cure();
	AMateria* clone() const;
	void use(ICharacter& target);
};
