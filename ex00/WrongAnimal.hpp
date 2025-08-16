/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 20:21:46 by aokhapki          #+#    #+#             */
/*   Updated: 2025/08/16 14:36:28 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>

class WrongAnimal 
{
protected:
    std::string m_type;
public:
    WrongAnimal();
	WrongAnimal(const std::string& type);
	WrongAnimal(const WrongAnimal& src);
	WrongAnimal& operator=(const WrongAnimal &rhs);
	virtual ~WrongAnimal();
	
    void makeSound() const; //critical error, Static binding only, because not virtual
    std::string getType() const;
};

#endif