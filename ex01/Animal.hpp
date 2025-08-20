/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 20:21:15 by aokhapki          #+#    #+#             */
/*   Updated: 2025/08/20 16:20:14 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal
{
protected:
	std::string m_type;
	
public:
	Animal();
	Animal(const std::string& type);
	Animal(const Animal& src);
	Animal& operator=(const Animal& rhs);
	virtual ~Animal();

	virtual void makeSound() const; //must be virtual, must be overrided after
	std::string getType() const;
};

#endif