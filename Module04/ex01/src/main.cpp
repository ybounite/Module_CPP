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
	{
		std::cout << "---- create Dog ----" << std::endl;
		const Animal* j = new Dog();
		std::cout << "\n---- create cat ----" << std::endl;
		const Animal* i = new Cat();

		std::cout << "\n---- Destructor Dog ----" << std::endl;
		delete j;
		j = i;
		std::cout << "\n---- Destructor Cat ----" << std::endl;
		delete i;
	}
	{
		std::cout << "==== create arry array of Animal ====" << std::endl;
		Animal	*hayawan[4];
		for (short i = 0; i < 4; i++) {
			if (i < 2)
				hayawan[i] = new Dog();
			else
				hayawan[i] = new Cat();
		}
		std::cout << "\n---- delete the arry of Animal ----" << std::endl;
		for (short i = 0; i < 4; i++)
		delete hayawan[i];
	}

	{

		std::cout << "\n==== create arry array of Animal ====\n" << std::endl;
		Animal	hayawan[2];
		for (short i = 0; i < 2; i++) {
			if (i < 1) {
				std::cout << "create Dog" << std::endl;
			hayawan[i] = Dog();  // Object slicing will occur if Animal is not polymorphic
			} else {
				std::cout << "create Cat" << std::endl;
				hayawan[i] = Cat();  // Again, slicing will occur
			}
		}
		for (short i = 0; i <2; i++)
			hayawan[i].makeSound();
	}
	
	return 0;
}
