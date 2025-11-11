/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 13:06:48 by ybounite          #+#    #+#             */
/*   Updated: 2025/11/09 13:06:50 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "easyfind.hpp"

int	main() {
	std::cout << "Declaring a Vector " << std::endl;
	std::vector<int> vArray;
	for (short i = 1; i <= 5; i++)
		vArray.push_back(i * 10);

	int	TargetFond1 = 40;
	std::cout << "*** Testing Find  ***" << std::endl;
	try {
		std::cout << "Attempting to find " << TargetFond1 << " ..." << std::endl;
		//Declaring Iterator
		std::vector<int>::iterator ItFound = find(vArray, TargetFond1);
		std::cout << "Success to Found value: " << *ItFound << std::endl;
	}
	catch ( std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << "Declaring a List " << std::endl;
	std::list<int> myList;
	int	TargetFond2 = 100;
	for (short i = 1; i <= 5; i++)
		myList.push_back(i * 10);
	try {
		std::cout << "Attempting to find " << TargetFond2 << " ..." << std::endl;
		std::list<int>::iterator it = find(myList, TargetFond2);
		std::cout << "Success to Found Value: " << *it << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
