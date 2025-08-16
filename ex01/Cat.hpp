/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 20:21:44 by aokhapki          #+#    #+#             */
/*   Updated: 2025/08/16 15:32:38 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
    Brain* m_brain;
public:
	Cat ();
	Cat (const std::string& type);
	Cat (const Cat& src);
	Cat& operator=(const Cat& rhs);
	~Cat();

	void makeSound() const;
	Brain* getBrain()const;
};
#endif