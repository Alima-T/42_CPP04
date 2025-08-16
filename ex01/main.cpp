/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 15:01:27 by aokhapki          #+#    #+#             */
/*   Updated: 2025/08/16 15:49:43 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

int main() {
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j; // must call Brain and Dog destructors
    delete i; // must call Brain and Cat destructors

    const int size = 4;
    Animal* animals[size];

    // half with Dogs, half with Cats
    for (int k = 0; k < size / 2; ++k)
        animals[k] = new Dog();
    for (int k = size / 2; k < size; ++k)
        animals[k] = new Cat();


// Test deep copy for Dog
    Dog* originalDog = new Dog();
    originalDog->getBrain()->setIdea(0, "Chase the ball");

    Dog* copiedDog = new Dog(*originalDog); // copy constructor (deep copy)
    std::cout << "Original dog Brain idea: " << originalDog->getBrain()->getIdea(0) << std::endl;
    std::cout << "Copied dog Brain idea:   " << copiedDog->getBrain()->getIdea(0) << std::endl;

    // Change original to ensure deep copy
    originalDog->getBrain()->setIdea(0, "Eat food");
    std::cout << "After modification, original dog Brain idea: " << originalDog->getBrain()->getIdea(0) << std::endl;
    std::cout << "After modification, copied dog Brain idea:   " << copiedDog->getBrain()->getIdea(0) << std::endl;

    delete originalDog;
    delete copiedDog;

    Dog basic;
    basic.getBrain()->setIdea(0, "Catch the cat");
    Dog copyBasic = basic; // copy constructor
    copyBasic.getBrain()->setIdea(0, "Play with ball");

    std::cout << "first idea: " << basic.getBrain()->getIdea(0) << std::endl;
    std::cout << "second idea: " << copyBasic.getBrain()->getIdea(0) << std::endl;
	
    // Delete all
    for (int k = 0; k < size; ++k)
        delete animals[k];
    return 0;
}
