/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 08:46:59 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/21 08:47:00 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include "Header.hpp"


class Character : public ICharacter{

	AMateria		*_inventory[4];
	std::string		_name;
	std::vector <AMateria *>	_keep;
public:
	Character();
	Character( std::string name );
	Character( const Character &Other );
	Character &operator=( const Character &Other );
	~Character();
	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
};
