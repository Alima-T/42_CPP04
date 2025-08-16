/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 20:21:21 by aokhapki          #+#    #+#             */
/*   Updated: 2025/08/16 14:55:54 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal() : m_type("Default")
{
    std::cout << "\033[32mAnimal default constructor\033[0m" << std::endl;
}

Animal::Animal(const std::string& type) : m_type(type)
{
    std::cout << "\033[32mAnimal parameterized constructor for type: " << m_type << "\033[0m" << std::endl;
}

Animal::Animal(const Animal& src) : m_type(src.m_type)
{
    std::cout << "\033[32mAnimal copy constructor for type: " << m_type << "\033[0m" << std::endl;
}

Animal& Animal::operator=(const Animal& rhs)
{
    if (this != &rhs) {
        m_type = rhs.m_type;
        std::cout << "\033[32mAnimal copy assignment operator for type: " << m_type << "\033[0m" << std::endl;
    } 
    else 
    {
        std::cout << "\033[32mAnimal self-assignment detected for type: " << m_type << "\033[0m" << std::endl;
    }
    return *this;
}

Animal::~Animal()
{
    std::cout << "\033[32mAnimal destructor for type: " << m_type << "\033[0m" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << "Animal sound: " << m_type << " makes a sound!" << std::endl;
}

std::string Animal::getType() const
{
    return m_type;
}