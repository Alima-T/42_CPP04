/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 14:10:27 by aokhapki          #+#    #+#             */
/*   Updated: 2025/08/20 15:39:01 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal() : m_type("WrongAnimalDefault")
{
	std::cout << "\033[31mWrongAnimal default constructor: " << m_type << "\033[0m" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string& type) : m_type(type)
{
	std::cout << "\033[31mWrongAnimal parameterized constructor: " << m_type << "\033[0m" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& src) : m_type(src.m_type)
{
	std::cout << "\033[31mWrongAnimal copy constructor\033[0m"<< std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& rhs)
{
	if (this != &rhs) {
		m_type = rhs.m_type;
		std::cout << "\033[31mWrongAnimal copy assignment operator\033[0m" << std::endl;
	} 
	else 
	{
		std::cout << "\033[31mWrongAnimal self-assignment detected\033[0m" << std::endl;
	}
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "\033[31mWrongAnimal destructor for type: " << m_type << "\033[0m" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "Makes a standard WrongAnimal sound!" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return m_type;
}