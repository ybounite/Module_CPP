/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 18:33:52 by ybounite          #+#    #+#             */
/*   Updated: 2025/11/03 15:30:51 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Serializer.hpp"

int	main() {
	Data	myData = {12, "root"};
	Data		*ptr;
	uintptr_t	uint_t;

	uint_t = Serializer::serialize(&myData);
	ptr = Serializer::deserialize(uint_t);

	std::cout << "Converted to uintptr_t: " << uint_t << std::endl;
	std::cout << "Converted back to Data pointer: " << ptr << std::endl;

	return 0;
}
