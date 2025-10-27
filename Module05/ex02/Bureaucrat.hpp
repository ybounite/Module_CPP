/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 10:24:50 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/26 15:59:05 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# pragma once
# include <iostream>

# define RESET		"\033[0m"
# define GREEN		"\033[32m"
# define YELLOW		"\033[33m"
# define BLUE		"\033[34m"
# define RED		"\033[31m"
# define UP		"\033[A"
# define CUT		"\033[K"

class AForm;

// ************************************************************************** //
//                               BUREAUCRAT Class                             //
// ************************************************************************** //

class Bureaucrat {

public:
	Bureaucrat();
	Bureaucrat( const std::string name, const short grad );
	Bureaucrat( const Bureaucrat &Other );
	Bureaucrat & operator=( const Bureaucrat &Other );
	~Bureaucrat();

	void		setGrade( const short grad );
	std::string	getName( void ) const;
	short		getGrade( void ) const;
	void		incrementGrade();
	void		decrementGrade();

	void		signForm( AForm &Bur );
	void		executeForm(AForm const & form) const;
	// Nested class  to inherit class exeption?
	class GradeTooHighException : public std::exception {
		// ! overrinding the what() method
		virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception {
		virtual const char* what() const throw();
	};

protected:
	const std::string	_name;
	short			_grad;

};

std::ostream	&operator<<( std::ostream &COUT, Bureaucrat &Bur ); 
