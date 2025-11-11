/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 15:25:56 by ybounite          #+#    #+#             */
/*   Updated: 2025/11/09 13:07:23 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once 

# include <iostream>
# include <vector>
# include <algorithm>
# include <iterator>
# include <list>

template<typename T>
typename T::iterator	find(const T	&Container, int	value) {

	typename T::iterator	it = std::find(Container.begin(), Container.end(), value);

	if (it == Container.end())
		throw std::runtime_error("value not found in container");
	return it;
}

template<typename T>
typename T::iterator	find(T	&Container, int	value) {

	typename T::iterator	it = std::find(Container.begin(), Container.end(), value);

	if (it == Container.end())
		throw std::runtime_error("value not found in container");
	return it;
}
