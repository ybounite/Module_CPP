/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AddNewContact.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 16:45:21 by ybounite          #+#    #+#             */
/*   Updated: 2025/09/06 16:49:28 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	ShowAddNewContactScreen()
{
	std::cout << BLUE << ":::::::::::::::::::::::::::::::::::::::::::" << NC << std::endl;
	std::cout << MAGENTA << "		Add New Contact Screean" << NC << std::endl;
	std::cout << BLUE << ":::::::::::::::::::::::::::::::::::::::::::" << NC << std::endl;
}

std::string	getInput(std::string Prompt)
{
	std::string	Input;

	do{
		std::cout << GREEN BOLD + Prompt + NC;
		getline(std::cin, Input);
		if (std::cin.eof())
			ExitOnEOF();
		if (Input.empty())
			std::cout << RED BOLD << "Oops!, this sting is emty Please try again." << NC << std::endl;
	}while (Input.empty());
	return Input;
}

void	Contact::SetContact()
{
	_FirstName = getInput("Enter first name: ");

	_LastName = getInput("Enter last name: ");

	_NickName = getInput("Enter nickname : ");

	_PhoneNumber = getInput("Enter phone number : ");

	_DarkestSecret = getInput("Enter darkest secret : ");
}

void	PhoneBook::AddContact()
{
	if (IndexContact >= 8)
		IndexContact = 0;
	ShowAddNewContactScreen();
	Contacts[IndexContact].SetContact();
	IndexContact++;
}
