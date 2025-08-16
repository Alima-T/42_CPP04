/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 20:21:41 by aokhapki          #+#    #+#             */
/*   Updated: 2025/08/16 15:32:23 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
    Brain* m_brain;
public:
		Dog();
		Dog(const std::string& type);
		Dog(const Dog& src);
		Dog& operator=(const Dog& rhs);
		~Dog();
		
		void makeSound() const;
		Brain* getBrain()const;
};

#endif
