/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 18:26:16 by tmoumni           #+#    #+#             */
/*   Updated: 2023/09/30 18:06:10 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : _name("Fefualt_clap_name") {
    std::cout << "DiamondTrap Constructer Called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name") {
    this->_name = name;
    this->_hit_points = FragTrap::_hit_points;
    this->_energy_points = ScavTrap::_energy_points;
    this->_attack_damage = FragTrap::_attack_damage;
    std::cout << "DiamondTrap name Constructer Called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap & copy) : ClapTrap(copy) {
    std::cout << "DiamondTrap Copy constructor called" << std::endl;
}

DiamondTrap & DiamondTrap::operator=(const DiamondTrap & copy) {
    ClapTrap::operator=(copy);
    std::cout << "DiamondTrap Copy assignement operator called" << std::endl;
    return (*this);
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DimondTrap Destructer called" << std::endl;
}

void DiamondTrap::attack(const std::string &target) {
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
    std::cout << _name << " --- " << ClapTrap::_name << std::endl;
}