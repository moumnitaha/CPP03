/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:58:16 by tmoumni           #+#    #+#             */
/*   Updated: 2023/09/27 17:30:27 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _hit_points(10), _energy_points(10), _attack_damage(0) {
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0) {
    std::cout << "Default name constructor called" << std::endl;
}

ClapTrap & ClapTrap::operator=(const ClapTrap &copy) {
    std::cout << "Copy assignment operator called" << std::endl;
    this->_name = copy.get_name();
    this->_hit_points = copy.get_hit_points();
    this->_energy_points = copy.get_energy_points();
    this->_attack_damage = copy.get_attack_damage();
    return (*this);
}

ClapTrap::ClapTrap(const ClapTrap & copy) {
    std::cout << "Copy constructor called" << std::endl;
    this->operator=(copy);
}

std::string ClapTrap::get_name(void) const {
    return (_name);
}

int ClapTrap::get_hit_points(void) const {
    return (_hit_points);
}

int ClapTrap::get_energy_points(void) const {
    return (_energy_points);
}

int ClapTrap::get_attack_damage(void) const {
    return (_attack_damage);
}

ClapTrap::~ClapTrap() {
    std::cout << "Destructor called" << std::endl;
}