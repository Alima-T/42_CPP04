/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 20:21:25 by aokhapki          #+#    #+#             */
/*   Updated: 2025/08/16 16:04:17 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "\033[34mDog default constructor\033[0m" << std::endl;
}

Dog::Dog(const std::string& type) : Animal(type)
{
    std::cout << "\033[34mDog parameterized constructor\033[0m" << std::endl;
}

Dog::Dog(const Dog& src) : Animal(src)
{
    std::cout << "\033[34mDog copy constructor\033[0m" << std::endl;
}

Dog& Dog::operator=(const Dog& rhs) 
{
    if (this != &rhs) 
    {
        Animal::operator=(rhs);  // Call base class assignment
        std::cout << "\033[34mDog copy assignment operator\033[0m" << std::endl;
    } 
    else 
    {
        std::cout << "\033[34mDog self-assignment detected\033[0m" << std::endl;
    }
    return *this;
}

Dog::~Dog() 
{
    std::cout << "\033[34mDog destructor\033[0m" << std::endl;
}

void Dog::makeSound() const 
{
	std::cout << "\033[34mWoof! Woof!\033[0m" << std::endl;
}