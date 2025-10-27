/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 10:24:50 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/25 16:01:24 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# include <iostream>

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

std::ostream	&operator<<( std::ostream &COUT, const Bureaucrat &Bur ); 
