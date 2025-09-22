/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 17:57:00 by ybounite          #+#    #+#             */
/*   Updated: 2025/09/14 17:57:30 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	Harl	Harl1;

	Harl1.complain( "debug" );
	Harl1.complain( "info" );
	Harl1.complain( "warning" );
	Harl1.complain("error");
	return 0;
}
