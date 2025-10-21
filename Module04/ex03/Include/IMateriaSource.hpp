/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 08:47:21 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/21 09:39:16 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once 

# include "Header.hpp"

class IMateriaSource {

public:
	IMateriaSource();
	IMateriaSource( const IMateriaSource &Other );
	IMateriaSource & operator=( const IMateriaSource &Other );
	virtual ~IMateriaSource();

	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};
