/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 12:07:29 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/27 17:51:59 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
# pragma once 

# include "Bureaucrat.hpp"

class Form {

public:
	Form( void );
	Form( const std::string &name, short gradeToSign, short gradeToExecute );
	Form( const Form &Other );
	Form &operator=( const Form &Other );
	~Form( void );

	std::string	getName( void ) const;
	int		getGradeToSign( void ) const;
	int		getGradeToExecute( void ) const;
	bool		isSigned( void ) const;
	void		beSigned( Bureaucrat &Bur);
	class	GradeTooHighException : public std::exception {

		virtual const char *what() const throw();
	};
	class	GradeTooLowException : public std::exception {

		virtual const char *what() const throw();
	};

private:
	const std::string	_name;
	const short		_gradToSing;
	const short 		_gradToExecute;
	bool			_isSigned;
};

std::ostream	&operator<<( std::ostream &os, const Form &form );
