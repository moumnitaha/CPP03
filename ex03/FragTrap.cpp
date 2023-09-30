/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 18:31:44 by tmoumni           #+#    #+#             */
/*   Updated: 2023/09/30 17:40:16 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
    std::cout << "FragTrap Constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    std::cout << "FragTrap Constructor with name called" << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap & copy) {
    ClapTrap::operator=(copy);
    std::cout << "FragTrap Copy assignement operator called" << std::endl;
    return (*this);
}

FragTrap::FragTrap(const FragTrap & copy) : ClapTrap(copy) {
    std::cout << "FragTrap Copy constructor called" << std::endl;
}

void FragTrap::attack(const std::string &target) {
    if (this->get_energy_points() == 0 || this->get_hit_points() <= 0) {
        if (this->get_hit_points() <= 0)
            std::cout << "FragTrap " << this->get_name() << " is dead!" << std::endl;
        return ;
    }
    std::cout << "FragTrap " << this->get_name() << " attacks " << target;
    std::cout << ", causing " << this->get_attack_damage() << " point(s) of damage!" << std::endl;
    this->_energy_points--;
}

void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap " << this->get_name() << " request a HighFives !" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap destructor called" << std::endl;
}
