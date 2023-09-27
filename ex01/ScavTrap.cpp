/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 18:31:44 by tmoumni           #+#    #+#             */
/*   Updated: 2023/09/27 19:02:27 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : _hit_points(100), _energy_points(50), _attack_damage(20) {
    std::cout << "Scav Constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : _name(name), _hit_points(100), _energy_points(50), _attack_damage(20) {
    std::cout << "Scav Constructor with name called" << std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap & copy) {
    this->_name = copy.get_name();
    this->_hit_points = copy.get_hit_points();
    this->_energy_points = copy.get_energy_points();
    this->_attack_damage = copy.get_attack_damage();
    std::cout << "Scav Copy assignemet called" << std::endl;
    return (*this);
}

ScavTrap::ScavTrap(const ScavTrap & copy) {
    this->operator=(copy);
    std::cout << "Scav Copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "Scav destructor called" << std::endl;
}
