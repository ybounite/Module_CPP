/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 15:46:59 by ybounite          #+#    #+#             */
/*   Updated: 2025/09/06 17:02:47 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PHONEBOOK_H__
#define __PHONEBOOK_H__

# include <iostream>
# include <string>
# include <iomanip>
# include <cstdlib> 
# include <cstring>

# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define YELLOW		"\033[33m"
# define BLUE		"\033[34m"
# define CYAN		"\033[36m"
# define MAGENTA	"\033[35m"
# define RESET		"\033[0m"
# define BOLD		"\033[1m"
# define NC 		"\e[0m"

# define DIGITS		"0123456789"

class	Contact{

private:
	std::string	_FirstName;
	std::string	_LastName;
	std::string	_NickName;
	std::string	_PhoneNumber;
	std::string	_DarkestSecret;
public:

	void	SetContact();
	void	DisplayContact(short Index);
	void	DisplayFullContact();
	bool	IsEmty();

};

class	PhoneBook{

private:
	Contact	Contacts[8];
	short		IndexContact;

public:

	PhoneBook() { IndexContact = 0; }

	void	AddContact();
	void	SearchContact();

};

void	ExitOnEOF();
void	ShowSearchContactScreen();
void	ShowAddNewContactScreen();
short	GetIndex();
void	  PrintPhoneBookMenueScreen();

# endif
