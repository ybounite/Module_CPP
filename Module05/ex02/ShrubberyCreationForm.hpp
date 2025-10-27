/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 13:02:00 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/26 15:10:06 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# include "AForm.hpp"
# include <fstream>
// ************************************************************************** //
//                   SHRUBBERYCREATIONFORM Class                              //
// ************************************************************************** //

class	ShrubberyCreationForm : public AForm {

public :
	ShrubberyCreationForm( void );
	ShrubberyCreationForm( const std::string &target );
	ShrubberyCreationForm( const ShrubberyCreationForm &Other );
	ShrubberyCreationForm & operator=( const ShrubberyCreationForm &Other );
	~ShrubberyCreationForm( void );
	
	void	execute(Bureaucrat const & executor) const;

	class	ErrorCearteFile : public std::exception {
		const char *what() const throw();
	};
private:
	std::string	_target;
};
