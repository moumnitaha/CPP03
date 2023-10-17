/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:58:16 by tmoumni           #+#    #+#             */
/*   Updated: 2023/10/17 18:24:21 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _hit_points(100), _energy_points(50), _attack_damage(20) {
    std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(100), _energy_points(50), _attack_damage(20) {
    std::cout << "ClapTrap parameterized constructor called" << std::endl;
}

ClapTrap & ClapTrap::operator=(const ClapTrap & copy) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this == &copy)
        return (*this);
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
    std::cout << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target) {
    if (_energy_points == 0 || _hit_points <= 0) {
        if (_hit_points <= 0)
            std::cout << "ClapTrap " << _name << " is dead!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << _name << " attacks " << target;
    std::cout << ", causing " << _attack_damage << " point(s) of damage!" << std::endl;
    _energy_points--;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if ((int)amount < 0) {
        std::cout << "Error: amount is negative" << std::endl;
        return ;
    }
    if (_energy_points == 0 || _hit_points <= 0) {
        if (_hit_points <= 0)
            std::cout << "ClapTrap " << _name << " is dead!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << _name << " gets " << amount;
    std::cout << " point(s) of damage!" << std::endl;
    (int)amount > _hit_points ? _hit_points = 0 : _hit_points -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if ((int)amount < 0) {
        std::cout << "Error: amount is negative" << std::endl;
        return ;
    }
    if (_energy_points == 0 || _hit_points <= 0) {
        if (_hit_points <= 0)
            std::cout << "ClapTrap " << _name << " is dead!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << _name << " gets " << amount;
    std::cout << " point(s) to get repaired!" << std::endl;
    _hit_points += amount;
    _energy_points--;
}

std::ostream & operator<< (std::ostream &o, const ClapTrap &c)
{
    o << c.get_name();
    return o;
}