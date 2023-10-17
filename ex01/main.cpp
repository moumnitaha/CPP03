/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:58:33 by tmoumni           #+#    #+#             */
/*   Updated: 2023/10/17 17:22:49 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap scv("<<SCV-01>>");
   
    scv.attack("[[ ENEMY 1 ]]");
    std::cout << "ENERGY: " << scv.get_energy_points() << std::endl;
    std::cout << "HITS: " << scv.get_hit_points() << std::endl;
    scv.takeDamage(98);
    std::cout << "ENERGY: " << scv.get_energy_points() << std::endl;
    std::cout << "HITS: " << scv.get_hit_points() << std::endl;
    scv.attack("[[ ENEMY 2 ]]");
    scv.beRepaired(1);
    std::cout << "ENERGY: " << scv.get_energy_points() << std::endl;
    std::cout << "HITS: " << scv.get_hit_points() << std::endl;
    scv.guardGate();
    return 0;
}
