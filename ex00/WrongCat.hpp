/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 20:21:48 by aokhapki          #+#    #+#             */
/*   Updated: 2025/08/20 15:04:45 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
/*
~WrongCat(); //if not virtual in Animal we have to call destructor, 
in another case ~WrongCat will not be call, what is case of leaks 
*/

class WrongCat : public WrongAnimal 
{
public:
	WrongCat();
	WrongCat(const std::string& type);
	WrongCat(const WrongCat& src);
	WrongCat& operator=(const WrongCat& rhs);
	~WrongCat();
	
	void makeSound() const;
	std::string getType() const;
};

#endif