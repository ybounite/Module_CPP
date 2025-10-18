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
# include "../Include/Animal.hpp"
# include "../Include/WrongAnimal.hpp"
# include "../Include/WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* cat = new Cat();
	const Animal* dog = new Dog();

	std::cout << cat->getType() << std::endl; 
	std::cout << dog->getType() << std::endl;

	meta->makeSound();
	cat->makeSound();
	dog->makeSound();

	
	std::cout << "---- destructor called ----"<< std::endl;
	delete meta;
	std::cout << std::endl;
	delete cat;
	std::cout << std::endl;
	delete dog;
	
	std::cout << "---- Wrong Animal ----" << std::endl;
	WrongAnimal *WAnimal = new WrongAnimal();
	WrongAnimal *WCat = new WrongCat();

	WAnimal->makeSound();
	WCat->makeSound();
	
	std::cout << "---- WrongAnimal and WrongCat destructor called ----"<< std::endl;
	delete WAnimal;
	delete WCat;
	return 0;
}
