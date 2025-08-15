/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 20:21:25 by aokhapki          #+#    #+#             */
/*   Updated: 2025/08/13 21:45:36 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const std::string& customType) 
{
    type = customType;
    std::cout << "Dog parameterized constructor called with type: " << type << std::endl;
}

Dog::Dog(const Dog& src) : Animal(src)
{
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& rhs) 
{
    if (this != &rhs) 
	{
        type = rhs.type;
        std::cout << "Dog copy assignment operator called for type: " << type << std::endl;
    } 
	else 
	{
        std::cout << "Dog self-assignment detected for type: " << type << std::endl;
    }
    return *this;
}

Dog::~Dog() 
{
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const 
{
    std::cout << "Woof! Woof!" << std::endl;
}
