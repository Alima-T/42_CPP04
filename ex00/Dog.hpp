/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 20:21:41 by aokhapki          #+#    #+#             */
/*   Updated: 2025/08/13 21:48:18 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include <iostream>

class Dog : public Animal
{
	public:
	
		Dog();
		Dog(const std::string& name);
		Dog(const Dog& src);
		Dog& operator=(const Dog& rhs);
		~Dog();
		
		void makeSound() const;
};

#endif
