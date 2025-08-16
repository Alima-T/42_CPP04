/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 14:50:54 by aokhapki          #+#    #+#             */
/*   Updated: 2025/08/16 15:58:05 by aokhapki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain() {
    std::cout << "\033[31mBrain default constructor called\n\033[0m";
}

Brain::Brain(const std::string &idea) {
    std::cout << "\033[31mBrain parameterized constructor called\n\033[0m";
    for (int i = 0; i < 100; i++)
        m_ideas[i] = idea;
}

Brain::Brain(const Brain &src) {
    std::cout << "\033[31mBrain copy constructor called\n\033[0m";
    for (int i = 0; i < 100; i++)
        m_ideas[i] = src.m_ideas[i];
}

Brain &Brain::operator=(const Brain &rhs) {
    std::cout << "\033[31mBrain assignment operator called\n\033[0m";
    if (this != &rhs) {
        for (int i = 0; i < 100; i++)
            m_ideas[i] = rhs.m_ideas[i];
    }
    return *this;
}

Brain::~Brain() {
    std::cout << "\033[31mBrain destructor called\n\033[0m";
}

void Brain::setIdea(int i, const std::string &idea) {
    if (i >= 0 && i < 100)
        m_ideas[i] = idea;
}

std::string Brain::getIdea(int i) const {
    if (i >= 0 && i < 100)
        return m_ideas[i];
    return ""; // TODO ??
}
