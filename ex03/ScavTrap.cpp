/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 18:31:44 by tmoumni           #+#    #+#             */
/*   Updated: 2023/10/17 17:49:44 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
    std::cout << "ScavTrap Constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    std::cout << "ScavTrap parameterized Constructor called" << std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap & copy) {
    ClapTrap::operator=(copy);
    std::cout << "ScavTrap Copy assignemet operator called" << std::endl;
    return (*this);
}

ScavTrap::ScavTrap(const ScavTrap & copy) : ClapTrap(copy) {
    std::cout << "ScavTrap Copy constructor called" << std::endl;
}

void ScavTrap::attack(const std::string &target) {
    if (this->get_energy_points() == 0 || this->get_hit_points() <= 0) {
        if (this->get_hit_points() <= 0)
            std::cout << "ScavTrap " << this->get_name() << " is dead!" << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << this->get_name() << " attacks " << target;
    std::cout << ", causing " << this->get_attack_damage() << " point(s) of damage!" << std::endl;
    this->_energy_points--;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << this->get_name() << " is now in Gate keeper mode." << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor called" << std::endl;
}
