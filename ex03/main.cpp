/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:58:33 by tmoumni           #+#    #+#             */
/*   Updated: 2023/10/17 22:55:42 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
    DiamondTrap dmr("<<DM-01>>");
    
    std::cout << "ENERGY: " << dmr.get_energy_points() << std::endl;
    std::cout << "HITS: " << dmr.get_hit_points() << std::endl;
    dmr.attack("[[ ENEMY-01 ]]");
    std::cout << "ENERGY: " << dmr.get_energy_points() << std::endl;
    std::cout << "HITS: " << dmr.get_hit_points() << std::endl;
    dmr.takeDamage(95);
    std::cout << "ENERGY: " << dmr.get_energy_points() << std::endl;
    std::cout << "HITS: " << dmr.get_hit_points() << std::endl;
    dmr.beRepaired(10);
    std::cout << "ENERGY: " << dmr.get_energy_points() << std::endl;
    std::cout << "HITS: " << dmr.get_hit_points() << std::endl;
    dmr.takeDamage(15);
    dmr.attack("[[ ENEMY-01]]");
    std::cout << "ENERGY: " << dmr.get_energy_points() << std::endl;
    std::cout << "HITS: " << dmr.get_hit_points() << std::endl;
    dmr.whoAmI();
    dmr.highFivesGuys();
    dmr.guardGate();
    return 0;
}
