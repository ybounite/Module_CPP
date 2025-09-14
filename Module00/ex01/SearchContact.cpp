/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SearchContact.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 16:50:45 by ybounite          #+#    #+#             */
/*   Updated: 2025/09/06 17:01:20 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	ShowSearchContactScreen()
{
	std::cout << BLUE << ":::::::::::::::::::::::::::::::::::::::::::" << NC << std::endl;
	std::cout << MAGENTA << "		Search Contact Screean" << NC << std::endl;
	std::cout << BLUE << ":::::::::::::::::::::::::::::::::::::::::::" << NC << std::endl;
}

void	Contact::DisplayFullContact()
{
	std::cout << BLUE BOLD "First Name: " << _FirstName << std::endl;
	std::cout << "Last Name: " << _LastName << std::endl;
	std::cout << "Nickname: " << _NickName << std::endl;
	std::cout << "Phone Number: " << _PhoneNumber << std::endl;
	std::cout << "Darkest Secret: " << _DarkestSecret << NC << std::endl;
}

void	PrintFixedWidth(std::string str)
{
	if (str.length() > 10)
		std::cout << std::right << std::setw(10) << str.substr(0, 9) + ".";
	else
		std::cout << std::right << std::setw(10) << str;
}

short	GetIndex()
{
	bool		IsFailed = false;
	short		Index = 0;
	std::string	UserInput;

	do{
		std::cout << GREEN BOLD "For more detail informations, Enter the desired index? " RESET;
		getline(std::cin, UserInput);
		if (std::cin.eof()) ExitOnEOF();
		if (strspn(UserInput.c_str(), DIGITS) != UserInput.length())
		{
			std::cout << RED "Error: Invalid index! (use digits only)" RESET << std::endl;
			IsFailed = true;
		}else{
			IsFailed = false;
			Index = atoi(UserInput.c_str());
		}
	} while (IsFailed);
	return Index;
}

void	Contact::DisplayContact(short Index)
{
	std::cout << "│" << std::right << std::setw(10) << Index << "│";

	PrintFixedWidth(_FirstName);
	std::cout << "│";

	PrintFixedWidth(_LastName);
	std::cout << "│";

	PrintFixedWidth(_NickName);
	std::cout << "│" << std::endl;
}

void	ShowPhoneBookScreen()
{
	std::cout << "╭──────────┬──────────┬──────────┬──────────╮\n";
	std::cout << "│   Index  │First Name│Last Name │nicknam   │\n";
	std::cout << "├──────────┼──────────┼──────────┼──────────┤\n";
}

bool	Contact::IsEmty()
{
	return (_FirstName.empty() && _LastName.empty() && _NickName.empty() && _PhoneNumber.empty());
}

void	PhoneBook::SearchContact()
{
	ShowSearchContactScreen();
	ShowPhoneBookScreen();
	for (short index = 0; index < 8; index++){
		if (!Contacts[index].IsEmty())
			Contacts[index].DisplayContact(index);
	}
	std::cout << "╰──────────┴──────────┴──────────┴──────────╯" << std::endl;

	short	idx = GetIndex();
	if (idx >= 0 && idx < 8)
		Contacts[idx].DisplayFullContact();
}
