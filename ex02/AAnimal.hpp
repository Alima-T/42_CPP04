/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 16:52:41 by aokhapki          #+#    #+#             */
/*   Updated: 2025/08/16 17:32:23 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <string>
/*
*Чисто виртуальная функция 
*слово virtual
*override
*Without virtual destructor → only the base destructor runs → derived part is not destroyed → memory/resource leaks.
*With virtual destructor → first the derived destructor runs, then the base → everything is cleaned up correctly.
*/
class AAnimal
{
protected:
	std::string m_type;
	
public:
	AAnimal();
	AAnimal(const std::string& type);
	AAnimal(const AAnimal& src);
	AAnimal& operator=(const AAnimal& rhs);
	virtual ~AAnimal(); //very important to make destractor virtualto avoid memleaks
	const std::string& getType() const;
	
	virtual void makeSound() const = 0; //must be virtual and =0 to make this class abstract
	
};


#endif