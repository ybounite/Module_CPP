/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 17:57:00 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/04 15:24:02 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	Harl	Harl1;

	Harl1.complain( "DEBUG" );
	Harl1.complain( "INFO" );
	Harl1.complain( "WARNING" );
	Harl1.complain( "ERROR" );
	return 0;
}
