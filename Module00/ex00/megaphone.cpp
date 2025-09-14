/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 09:26:47 by ybounite          #+#    #+#             */
/*   Updated: 2025/06/17 13:40:22 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <string>

void	printUppercaseArgument(std::string	str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		std::cout << (char)toupper(str[i]);
	}
}

int	main(int arc, char **arv)
{
	if (arc == 1){
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}

	for (int i = 1; i < arc; i++)
		printUppercaseArgument((std::string)arv[i]);
	std::cout << std::endl;
	return 0;
}

