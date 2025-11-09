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

void	print(int &arr) { std::cout << arr << " "; }

void	printConst( const int &arr) {std::cout << arr << " "; }

void	printString(const std::string &str ) { std::cout << str << std::endl; }

void	print(const std::string &str){ std::cout << str << std::endl; }

int	main() {
	std::cout << "*** Array of integer ***" << std::endl;
	int	intArray[] = {1, 2, 3, 4, 5};
	iter(intArray, 5, printConst);

	std::cout << "\n*** Template Array of string ***" << std::endl;
	std::string strarray[] = {"hello", "world", "templates"};
	iter(strarray, 3, printElement);
	std::cout << "\n*** Array of string ***" << std::endl;
	iter(strarray, 3, print);
	return 0;
}
