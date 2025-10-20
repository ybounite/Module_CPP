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
    // Polymorphism: Animal pointer to derived objects
    Animal* animals[2];
    animals[0] = new Cat();
    animals[1] = new Dog();

    for (int i = 0; i < 2; ++i) {
        std::cout << animals[i]->getType() << " says: ";
        animals[i]->makeSound();
    }

    Cat originalCat;
    Cat copyCat(originalCat);    // copy constructor
    Cat assignedCat;
    assignedCat = originalCat;   // assignment operator

    std::cout << "CopyCat says: ";
    copyCat.makeSound();

    std::cout << "AssignedCat says: ";
    assignedCat.makeSound();

    Dog originalDog;
    Dog copyDog(originalDog);
    Dog assignedDog;
    assignedDog = originalDog;

    std::cout << "CopyDog says: ";
    copyDog.makeSound();

    std::cout << "AssignedDog says: ";
    assignedDog.makeSound();

    // Clean up
    for (int i = 0; i < 2; ++i) {
        delete animals[i];
    }

    return 0;
}
