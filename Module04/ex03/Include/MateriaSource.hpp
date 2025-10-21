/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 08:47:31 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/21 08:47:34 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once 

# include "Header.hpp"

class MateriaSource : public IMateriaSource {

private:
	AMateria* _learned[4];

public:
	MateriaSource();
	MateriaSource( const MateriaSource &Other);
	MateriaSource & operator=( const MateriaSource &Other);
	~MateriaSource();

	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
};
