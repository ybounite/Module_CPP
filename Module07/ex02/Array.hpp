/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 21:58:59 by ybounite          #+#    #+#             */
/*   Updated: 2025/11/05 22:17:22 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once 

# include <iostream>
# include <string>

template<typename T>
class	Array {

public:
	Array(): _size(0), _Date(NULL){
	        std::cout << "Array default constructor has been called" << std::endl;
	}
	Array( unsigned int size )  {
		_size = size;
		_Date = new T[_size];
		std::cout << "Array parameterized constructor has been called" << std::endl;
	}
	Array( const Array&Other ) : _size(Other._size), _Date(new T[_size]){
		*this = Other;
		std::cout << "Array copy constructor has been called" << std::endl;
	}
	Array & operator=( const Array &Other ){
		if(this != &Other) {
			delete []_Date;
			this->_size = Other._size;
			this->_Date = new T[_size];
			for (unsigned int i = 0; i < _size; i++)
				this->_Date[i] = Other._Date[i];
		}
		std::cout << "Array copy assignment operator has been called"<< std::endl;
		return *this;
	}
	~Array() {
		delete []_Date;
		std::cout << "Array Destructor has been called" << std::endl;
	}
	T	&operator[]( const unsigned int index ) {
		if (this->_size <= index)
			throw std::out_of_range("Invalide index out of bounds");
		return this->_Date[index];
	}
	const T	&operator[]( const unsigned int index ) const {
		if (this->_size <= index)
			throw std::out_of_range("Invalide index out of bounds");
		return this->_Date[index];
	}
	unsigned int	size( void ) const { return this->_size; }

private:
	unsigned int	_size;
	T		*_Date;
};
