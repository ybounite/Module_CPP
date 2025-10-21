/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 08:46:49 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/21 09:35:49 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../Include/Header.hpp"
# include "../Include/MateriaSource.hpp"

int main()
{
	ICharacter *me = new Character("me");
	AMateria *tmp = new Cure();
	std::cout << me->getName() << std::endl;
	/*
	 *Character equip(AMateria*m)
	 * unquip( index )
	 * use(index , ICharacter &target)
	 * */
	
	me->equip(new Cure());
	me->equip(new Ice());
	me->unequip(0);
	me->unequip(1);
	me->use(0, *me);
	me->use(1, *me);
	IMateriaSource *src = new MateriaSource();

	delete src;
	delete me;
	delete tmp;
	return 0;
}
