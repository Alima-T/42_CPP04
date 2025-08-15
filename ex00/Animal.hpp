/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 20:21:15 by aokhapki          #+#    #+#             */
/*   Updated: 2025/08/13 21:48:26 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal
{
protected:
	std::string type;
	
public:
	Animal();
	Animal(const std::string& name);
	Animal(const Animal& src);
	Animal& Animal::operator=(const Animal& rhs);
	virtual ~Animal();

	virtual void makeSound() const;
	std::string getType() const;
};

#endif