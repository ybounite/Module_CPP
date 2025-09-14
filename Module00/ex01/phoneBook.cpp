/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 14:31:02 by ybounite          #+#    #+#             */
/*   Updated: 2025/09/06 17:02:58 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	ExitOnEOF()
{
	std::cout << RED BOLD "\nEOF detected, exiting.\n" NC << std::endl;
	exit(EXIT_FAILURE);
}

void	  PrintPhoneBookMenueScreen()
{
	std::cout << BLUE << ":::::::::::::::::::::::::::::::::::::::::::" << NC << std::endl;
	std::cout << YELLOW << "	PhoneBook Menu Screen" << NC << std::endl;
	std::cout << BLUE << ":::::::::::::::::::::::::::::::::::::::::::" << NC << std::endl;
	std::cout << BOLD << "[1] ADD a Contact.\n";
	std::cout << "[2] SEARCH for a Contact.\n";
	std::cout << "[3] EXIT.\n";
	std::cout << BLUE << ":::::::::::::::::::::::::::::::::::::::::::" << NC << std::endl;
}

void	StartSimulation(PhoneBook PhoneBook)
{
	std::string	Input;
	PrintPhoneBookMenueScreen();
	while (true)
	{
		std::cout << BOLD "Enter Commands : " NC;
		getline(std::cin, Input);
		if (std::cin.eof())
			ExitOnEOF();
		if (Input == "ADD")
			PhoneBook.AddContact();
		else if (Input == "SEARCH")
			PhoneBook.SearchContact();
		else if (Input == "EXIT")
			break ;
	}
}

int	main()
{
	PhoneBook	PhoneBook1;
	StartSimulation(PhoneBook1);
	return 0;
}
