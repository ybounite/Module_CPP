/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 14:39:44 by ybounite          #+#    #+#             */
/*   Updated: 2025/11/05 14:40:41 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
# pragma once 

# include <iostream>
# include <string>


template<typename T>
void	swap(T	&a, T	&b) {

	T tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
T	min(T	a, T	b) { return (a < b) ? a : b; }

template<typename T>
T	max(T	a, T	b) { return (a > b) ? a : b; }

