/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 20:21:48 by aokhapki          #+#    #+#             */
/*   Updated: 2025/08/16 14:31:07 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal 
{
public:
    WrongCat();
	WrongCat(const std::string& type);
	WrongCat(const WrongCat& src);
    WrongCat& operator=(const WrongCat& rhs);
    virtual ~WrongCat();
    void makeSound() const;
    std::string getType() const;
};

#endif