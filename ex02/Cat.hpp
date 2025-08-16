/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 17:35:21 by aokhapki          #+#    #+#             */
/*   Updated: 2025/08/16 17:36:43 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include <iostream>

class Cat : public AAnimal
{
public:
	Cat ();
	Cat (const std::string& type);
	Cat (const Cat& src);
	Cat& operator=(const Cat& rhs);
	~Cat();

	void makeSound() const override;
};
#endif