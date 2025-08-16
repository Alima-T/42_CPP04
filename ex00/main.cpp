/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 20:21:34 by aokhapki          #+#    #+#             */
/*   Updated: 2025/08/16 16:16:28 by aokhapki         ###   ########.fr       */
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

    std::cout << d->getType() << " " << std::endl; 
	d->makeSound(); // Dog sound  
    std::cout << c->getType() << " " << std::endl;
 	c->makeSound(); // Cat sound
    animal->makeSound(); // Animal sound

    delete animal;
    delete d;
    delete c;

    std::cout << "\n=== Wrong Animal Test ===" << std::endl;

    const WrongAnimal* wrongAnimal = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << wrongAnimal->getType() << " " << std::endl; 
	wrongAnimal->makeSound(); // WrongAnimal sound
    std::cout << wrongCat->getType() << " " << std::endl;
    wrongCat->makeSound(); // should be uniq for WrongCat, but because it's not polymorphical it makes still WrongAnimal sound!

    delete wrongAnimal;
    delete wrongCat;

    return 0;
}
