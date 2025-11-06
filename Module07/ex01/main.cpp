/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 20:48:51 by ybounite          #+#    #+#             */
/*   Updated: 2025/11/05 21:53:36 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "iter.hpp"

int	main() {
	int	intArray[] = {1, 2, 3, 4, 5};
	std::string strarray[] = {"hello", "world", "c++", "templates"};
	iter(intArray, 5, printElement<int>);
	iter(strarray, 4 , printElement<std::string>);
	return 0;
}
