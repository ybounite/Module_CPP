/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 18:18:52 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/27 18:37:09 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# include "Bureaucrat.hpp"

// ************************************************************************** //
//                               Intern Class                                 //
// ************************************************************************** //

class Intern {

public:
	Intern( void );
	Intern( const Intern &Other );
	Intern &operator=( const Intern &Other );
	~Intern( void );

	AForm *makeForm(const std::string &formName, const std::string &target);

private:
	AForm	*Forms[3];
};
