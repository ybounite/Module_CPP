/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 14:30:37 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/04 14:30:38 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

enTypeLevel getTypeLevel( std::string level)
{
		if ( level == "DEBUG")
			return enDebug;
		else if ( level == "INFO")
			  return enInfo;
		else if ( level == "WARNIG")
			return enWarning;
		else if ( level == "ERROR")
			return enError;
		else
			return enUnknown;
}

int	main(int arc, char **arv)
{
	if (arc != 2){
		std::cerr << "Usage: " << arv[0] << " <log level>" << std::endl;
		return 1;
	}
	Harl Harl1;

	Harl1.complain((std::string)arv[1]);
	return 0;
}
