/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 12:07:29 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/26 14:25:44 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# include "Bureaucrat.hpp"

// ************************************************************************** //
//                               AForm Class                                  //
// ************************************************************************** //

class AForm {

public:
	AForm( void );
	AForm( const std::string &name, short gradeToSign, short gradeToExecute );
	AForm( const AForm &Other );
	AForm &operator=( const AForm &Other );
	virtual ~AForm( void );

	std::string		getName( void ) const;
	int			getGradeToSign( void ) const;
	int			getGradeToExecute( void ) const;
	bool			isSigned( void ) const;
	void			beSigned( Bureaucrat &Bur);
	virtual void		execute(Bureaucrat const & executor) const = 0;

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

std::ostream	&operator<<( std::ostream &os, const AForm &form );
