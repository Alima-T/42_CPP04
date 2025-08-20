/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 17:49:33 by aokhapki          #+#    #+#             */
/*   Updated: 2025/08/20 17:57:07 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main() 
{
	AAnimal* AAnimals[2];

	AAnimals[0] = new Cat();
	AAnimals[1] = new Cat();

	for (int i = 0; i < 2; i++) {
		std::cout << AAnimals[i]->getType() << " says: ";
		AAnimals[i]->makeSound();
	}

	for (int i = 0; i < 2; i++)
		delete AAnimals[i];

	Cat basic;
	basic.getBrain()->setIdea(0, "Catch the cat");
	Cat copyBasic = basic; // copy constructor
	copyBasic.getBrain()->setIdea(0, "Play with ball");

	std::cout << "first idea: " << basic.getBrain()->getIdea(0) << std::endl;
	std::cout << "second idea: " << copyBasic.getBrain()->getIdea(0) << std::endl;
	
	// AAnimal test; //compile error
	return 0;
}