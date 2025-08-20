/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 17:49:33 by aokhapki          #+#    #+#             */
/*   Updated: 2025/08/20 16:24:17 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main() 
{
	AAnimal* animals[2];

	animals[0] = new Dog();
	animals[1] = new Cat();

	for (int i = 0; i < 2; i++) {
		std::cout << animals[i]->getType() << " says: ";
		animals[i]->makeSound();
	}

	for (int i = 0; i < 2; i++)
		delete animals[i];

	// AAnimal test; //compile error
	return 0;
}