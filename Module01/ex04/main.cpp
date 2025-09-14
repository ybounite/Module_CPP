/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 15:27:37 by ybounite          #+#    #+#             */
/*   Updated: 2025/09/14 16:24:41 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"


int	main(int arc, char *arv[])
{
	if (arc != 4){
		std::cerr << "Usage: " << arv[0] << " <filename> <s1> <s2>"
			<< std::endl;
		return 1;
	}

	Replace	replace(arv[1], arv[2], arv[3]);
	replace.process();
	return 0;
}
