/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 17:03:30 by aokhapki          #+#    #+#             */
/*   Updated: 2025/08/16 17:16:54 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include <iostream>

AAnimal::AAnimal() : m_type("Unknown")
{
	std::cout << "AAnimal default constructor\n";
}

AAnimal::AAnimal(const std::string& type) : m_type(type)
{
	std::cout << "AAnimal parameterized constructor\n";
}
AAnimal::AAnimal(const AAnimal &src) : m_type(src.m_type)
{
	std::cout << "AAnimal copy constructor\n";
}

AAnimal& AAnimal::operator=(const AAnimal &rhs)
{
	if(this != &rhs)
	{
		m_type = rhs.m_type;
	}
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor\n";
}

const std::string& AAnimal::getType() const
{
	return m_type;
}

