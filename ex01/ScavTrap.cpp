/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 18:31:44 by tmoumni           #+#    #+#             */
/*   Updated: 2023/09/28 18:45:31 by tmoumni          ###   ########.fr       */
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
    std::cout << "Scav Copy assignemet operator called" << std::endl;
    return (*this);
}

ScavTrap::ScavTrap(const ScavTrap & copy) : ClapTrap(copy) {
    std::cout << "Scav Copy constructor called" << std::endl;
}

void ScavTrap::attack(const std::string &target) {
    if (this->get_energy_points() == 0 || this->get_hit_points() <= 0) {
        if (this->get_hit_points() <= 0)
            std::cout << "ScavTrap " << this->get_name() << " is dead!" << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << this->get_name() << " attacks " << target;
    std::cout << ", causing " << this->get_attack_damage() << " point(s) of damage!" << std::endl;
    set_energy_points(this->get_energy_points() - 1);
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << this->get_name() << " is now in Gate keeper mode." << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "Scav destructor called" << std::endl;
}
