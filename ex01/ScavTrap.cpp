/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 18:31:44 by tmoumni           #+#    #+#             */
/*   Updated: 2023/09/28 13:41:02 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
    std::cout << "Scav Constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    std::cout << "Scav Constructor with name called" << std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap & copy) {
    ClapTrap::operator=(copy);
    std::cout << "Scav Copy assignemet called" << std::endl;
    return (*this);
}

ScavTrap::ScavTrap(const ScavTrap & copy) : ClapTrap(copy) {
    std::cout << "Scav Copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "Scav destructor called" << std::endl;
}
