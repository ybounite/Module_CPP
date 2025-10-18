/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 18:54:45 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/17 11:38:35 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>

// ************************************************************************** //
//                               BRAIN Class                                  //
// ************************************************************************** //

class Brain {


public:

	Brain( void );
	Brain( const Brain &other );
	Brain & operator=( const Brain &Other );
	~Brain( void );

	const std::string	getIdeasIndex( short index ) const;
	void			setIdeasIndex( short index, std::string &idea );

private:
	std::string	_ideas[100];
};
