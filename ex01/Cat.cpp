/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 21:00:18 by aokhapki          #+#    #+#             */
/*   Updated: 2025/08/16 15:34:33 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

Cat::Cat() : Animal("Cat"), m_brain(new Brain())
{
    std::cout << "\033[33mCat default constructor\033[0m" << std::endl;
}

Cat::Cat(const std::string& type) : Animal(type),  m_brain(new Brain())
{
    std::cout << "\033[33mCat parameterized constructor for type: " << type << "\033[0m" << std::endl;
}
    
Cat::Cat(const Cat& src) : Animal(src),  m_brain(new Brain())
{
    std::cout << "\033[33mCat copy constructor\033[0m" << std::endl;
}

Cat& Cat::operator=(const Cat& rhs)
{
    if (this != &rhs) 
    {
        Animal::operator=(rhs);  // Call base class assignment
		delete m_brain;
		m_brain = new Brain(*rhs.m_brain);
        std::cout << "\033[33mCat copy assignment operator for type: " << getType() << "\033[0m" << std::endl;
    } 
    else 
    {
        std::cout << "\033[33mCat self-assignment detected for type: " << getType() << "\033[0m" << std::endl;
    }
    return *this;
}

Cat::~Cat()
{
	delete m_brain;
    std::cout << "\033[33mCat destructor for type: " << getType() << "\033[0m" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "\033[33Meow! Meow!\033[0m" << std::endl;
}

Brain* Cat::getBrain() const
{
	return m_brain;
}