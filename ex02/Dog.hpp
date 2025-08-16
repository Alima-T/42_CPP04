/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 17:33:32 by aokhapki          #+#    #+#             */
/*   Updated: 2025/08/16 17:41:11 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"

class Dog : public AAnimal
{

public:
		Dog();
		Dog(const std::string& type);
		Dog(const Dog& src);
		Dog& operator=(const Dog& rhs);
		~Dog();
		
		void makeSound() const override;
};

#endif
