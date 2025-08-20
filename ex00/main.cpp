/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 20:21:34 by aokhapki          #+#    #+#             */
/*   Updated: 2025/08/20 15:39:52 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* animal = new Animal();
	const Animal* d = new Dog();
	const Animal* c = new Cat();

	std::cout << d->getType() << " "; 
	d->makeSound(); // Dog sound  
	std::cout << c->getType() << " ";
 	c->makeSound(); // Cat sound
	animal->makeSound(); // Animal sound

	delete animal;
	delete d;
	delete c;

	std::cout << "\n=== Wrong Animal Test ===" << std::endl;

	const WrongAnimal* wrongAnimal = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();
	const WrongCat* wrongCat2 = new WrongCat();

	std::cout << wrongAnimal->getType() << ": "; 
	wrongAnimal->makeSound(); // WrongAnimal sound
	std::cout << wrongCat->getType() << ": ";
	wrongCat->makeSound(); // should be uniq for WrongCat, but because it's not polymorphical it makes still WrongAnimal sound!
	std::cout << wrongCat2->getType() << ": ";
	wrongCat2->makeSound(); 
	
	delete wrongAnimal;
	delete wrongCat;
	delete wrongCat2;

	return 0;
}
