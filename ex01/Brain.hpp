/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 14:49:45 by aokhapki          #+#    #+#             */
/*   Updated: 2025/08/20 15:28:53 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain {
private:
	std::string m_ideas[100];

public:
	Brain();
	Brain(const std::string &idea);
	Brain(const Brain &src);
	Brain &operator=(const Brain &rhs);
	~Brain();

	void setIdea(int index, const std::string &idea);
	std::string getIdea(int index) const;
};

#endif
