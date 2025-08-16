/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 17:36:00 by aokhapki          #+#    #+#             */
/*   Updated: 2025/08/16 17:38:36 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal("Cat")
{
    std::cout << "\033[33mCat default constructor\033[0m" << std::endl;
}

Cat::Cat(const std::string& type) : AAnimal(type)
{
    std::cout << "\033[33mCat parameterized constructor for type\033[0m" << std::endl;
}
    
Cat::Cat(const Cat& src) : AAnimal(src)
{
    std::cout << "\033[33mCat copy constructor\033[0m" << std::endl;
}

Cat& Cat::operator=(const Cat& rhs)
{
    if (this != &rhs) 
    {
        AAnimal::operator=(rhs);  // Call base class assignment
        std::cout << "\033[33mCat copy assignment operator\033[0m" << std::endl;
    } 
    else 
    {
        std::cout << "\033[33mCat self-assignment detected\033[0m" << std::endl;
    }
    return *this;
}

Cat::~Cat()
{
    std::cout << "\033[33mCat destructor\033[0m" << std::endl;
}

void Cat::makeSound() const 
{
	std::cout << "\033[33mMeow! Meow!\033[0m" << std::endl;
}
