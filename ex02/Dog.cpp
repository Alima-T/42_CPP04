/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 20:21:25 by aokhapki          #+#    #+#             */
/*   Updated: 2025/08/20 18:06:57 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"
#include <iostream>

Dog::Dog() : AAnimal("Dog"), m_brain(new Brain())
{
	std::cout << "\033[34mDog default constructor\033[0m" << std::endl;
}

Dog::Dog(const std::string& type) : AAnimal(type), m_brain(new Brain())
{
	std::cout << "\033[34mDog parameterized constructor\033[0m" << std::endl;
}

Dog::Dog(const Dog& src) : AAnimal(src), m_brain(new Brain(*src.m_brain))
{
	std::cout << "\033[34mDog copy constructor\033[0m" << std::endl;
}

Dog& Dog::operator=(const Dog& rhs) 
{
	if (this != &rhs) 
	{
		AAnimal::operator=(rhs);  // Call base class assignment
		delete m_brain;
		m_brain = new Brain(*rhs.m_brain);  
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
	delete m_brain;
	std::cout << "\033[34mDog destructor\033[0m" << std::endl;
}

void Dog::makeSound() const 
{
	std::cout << "\033[34mWoof! Woof!\033[0m" << std::endl;
}

Brain* Dog::getBrain()const
{
	return m_brain;
}