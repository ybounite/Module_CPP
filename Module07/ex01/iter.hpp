/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 20:49:25 by ybounite          #+#    #+#             */
/*   Updated: 2025/11/05 21:22:44 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once 

# include <iostream>
# include <string>

template<typename T>
void	printElement(const T &element) { std::cout << element << " "; }

template<typename T, typename F>
void	iter(T *array, const size_t length, F funct) {
	for (size_t i = 0; i < length; i++)
		funct(array[i]);
}
