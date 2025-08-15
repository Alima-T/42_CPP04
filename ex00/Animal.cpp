/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 20:21:21 by aokhapki          #+#    #+#             */
/*   Updated: 2025/08/15 20:56:27 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal() : type("Default")
{
	std::cout << "Animal default constructor created" << std::endl;
}

Animal::Animal(const std::string& name) : type(name)
{
	std::cout << "Animal parameterized constructor created for type: " << type << std::endl;
}
Animal::Animal(const Animal& src) : type(src.type)
{
	std::cout << "Animal copy constructor created for type: " << type << std::endl;
}
Animal& Animal::operator=(const Animal& rhs)
{
    if (this != &rhs) {
        type = rhs.type;
        std::cout << "Animal copy assignment operator called for type: " << type << std::endl;
    } 
	else 
	{
        std::cout << "Animal self-assignment detected for type: " << type << std::endl;
    }
    return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destructor created for type: " << type << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "Animal sound: " << type << " makes a sound!" << std::endl;
}

std::string Animal::getType() const
{
	return type;
}
