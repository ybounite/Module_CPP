/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 18:25:23 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/16 17:30:01 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../Include/Cat.hpp"
# include "../Include/Dog.hpp"

int main()
{
	Animal* animals[2];
	animals[0] = new Cat();
	animals[1] = new Dog();

	for (int i = 0; i < 2; ++i) {
		std::cout << animals[i]->getType() << " says : ";
		animals[i]->makeSound();
	}

	for (int i = 0; i < 2; ++i)
		delete animals[i];
	std::cout << "\n ==== test 2 ====" << std::endl;
	
	Animal *j = new Cat();
	
	std::cout << j->getType() << " says : ";
	j->makeSound();
	
	Animal	*i = new Dog();

	std::cout << i->getType() << " says: ";
	i->makeSound();

	std::cout << "\n--- destruct -----" << std::endl;
	delete j;
	delete i;
    return 0;
}
