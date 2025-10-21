/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 08:46:07 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/21 08:46:08 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include "Header.hpp"

class AMateria {

public:
	AMateria();
	AMateria( std::string const & type );
	AMateria( const AMateria &Other );
	AMateria &operator=( const AMateria &Other);
	virtual ~AMateria();

	std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);

protected:
	std::string _type;
};
