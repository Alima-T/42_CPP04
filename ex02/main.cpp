/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 17:49:33 by aokhapki          #+#    #+#             */
/*   Updated: 2025/08/20 19:03:55 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main() 
{
	// AAnimal test; //compile error
	AAnimal* AAnimals[2];
	AAnimals[0] = new Cat();
	AAnimals[1] = new Dog();

	for (int i = 0; i < 2; i++) {
		std::cout << AAnimals[i]->getType() << " says: ";
		AAnimals[i]->makeSound();
	}

	//Cat
	Cat* originalCat = new Cat();
	originalCat->getBrain()->setIdea(0, "Chase the Mouse");
	// copy constructor (deep copy)
	Cat* copiedCat = new Cat(*originalCat); 
	std::cout << "Original Cat Brain idea: " << originalCat->getBrain()->getIdea(0) << std::endl;
	std::cout << "Copied Cat Brain idea:   " << copiedCat->getBrain()->getIdea(0) << std::endl;

	// Change original to ensure deep copy
	originalCat->getBrain()->setIdea(0, "Play with tail");
	std::cout << "After modification, original Cat Brain idea: " << originalCat->getBrain()->getIdea(0) << std::endl;
	std::cout << "After modification, copied Cat Brain idea: " << copiedCat->getBrain()->getIdea(0) << std::endl;
	
	//Dog 
	Dog basic;
	basic.getBrain()->setIdea(0, "Catch the cat");
	Dog copyBasic = basic; // copy constructor
	copyBasic.getBrain()->setIdea(0, "Play with ball");

	delete originalCat;
	delete copiedCat;
	for (int i = 0; i < 2; i++)
	delete AAnimals[i];

	return 0;
}