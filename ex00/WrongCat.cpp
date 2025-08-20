/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 14:10:09 by aokhapki          #+#    #+#             */
/*   Updated: 2025/08/20 15:36:58 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "\033[35mWrongCat default constructor\033[0m" << std::endl;
}

WrongCat::WrongCat(const std::string& type) : WrongAnimal(type)
{
	std::cout << "\033[35mWrongCat parameterized constructor\033[0m" << std::endl;
}

WrongCat::WrongCat(const WrongCat& src) : WrongAnimal(src)
{
	std::cout << "\033[35mWrongCat copy constructor\033[0m" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& rhs)
{
	if (this != &rhs) 
	{
		WrongAnimal::operator=(rhs);  // Call base class assignment
		std::cout << "\033[35mWrongCat copy assignment operator\033[0m" << std::endl;
	} 
	else 
	{
		std::cout << "\033[35mWrongCat self-assignment detected\033[0m" << std::endl;
	}
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "\033[35mWrongCat destructor\033[0m" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "Meow! Meow! (but this won't be polymorphically)" << std::endl;
}

std::string WrongCat::getType() const
{
	return m_type;
}
