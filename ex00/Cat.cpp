/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 21:00:18 by aokhapki          #+#    #+#             */
/*   Updated: 2025/08/13 21:39:27 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat (const std::string& name) :Animal(name)
{
	std::cout << "Cat parameterized constructor called for type: " << name << std::endl;
}
	
Cat::Cat (const Cat& src) : Animal(src)
{
	type = src.type;
}

Cat& Cat::operator=(const Cat& rhs)
{
    if (this != &rhs) {
        type = rhs.type;
        std::cout << "Cat copy assignment operator called for type: " << type << std::endl;
    } 
	else 
	{
        std::cout << "Cat self-assignment detected for type: " << type << std::endl;
    }
    return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called for type: " << type << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meow! Meow!" << std::endl;
}
