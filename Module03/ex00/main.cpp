/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 20:20:43 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/12 11:25:41 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

int	main(){
	ClapTrap a("Clapyy");

	a.attack("Mr.Robot");
	a.attack("Mr.Robot");
	a.beRepaired( 200 );
	a.takeDamage( 600 );
	a.attack("Mr.Robot");
	return 0;
}

