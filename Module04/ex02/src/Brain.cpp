/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 11:29:15 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/17 11:51:46 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../Include/Brain.hpp"

Brain::Brain( void ) {
	std::cout << "Brain Default constructors has been called" << std::endl;
}

Brain::Brain( const Brain &other ) {

	for (short i = 0; i < 100; i++)	{
		this->_ideas[i] = other._ideas[i];
	}
	std::cout << "Brain copy constructor has been called" << std::endl;
}

Brain & Brain::operator=( const Brain &Other ) {

	for (short i = 0; i < 100; i++)	{
		this->_ideas[i] = Other._ideas[i];
	}
	return *this;
}
Brain::~Brain( void ) {

	std::cout << "Brain destructors has been called" << std::endl;
}

const std::string	Brain::getIdeasIndex( short index ) const {
	if (index < 0 || index >= 100){
		std::cout << "Error: invalude Index : " << index << std::endl;
		return "";
	}
	return this->_ideas[index];
}

void			Brain::setIdeasIndex( short index, std::string &idea ) {
	if (index < 0 && index ) {
		std::cout << "Error: invalude Index : " << index << std::endl;
		return ;
	}

	for (short i = 0; i < index; i++){
		this->_ideas[i] = idea;
	}
}
