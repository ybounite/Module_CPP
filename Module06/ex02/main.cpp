/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 17:16:17 by ybounite          #+#    #+#             */
/*   Updated: 2025/11/03 17:24:55 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PolymorphicUtils.hpp"

int	main() {
	srand((unsigned)time(NULL));
	Base	*base = generate();
	identify(*base);
	A	a;
	identify(a);
	delete base;
	return 0;
}
