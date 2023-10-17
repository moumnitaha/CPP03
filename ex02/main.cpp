/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:58:33 by tmoumni           #+#    #+#             */
/*   Updated: 2023/10/17 17:33:10 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    FragTrap frg("<<FRG-01>>");
    frg.attack("[[ ENEMY-01 ]]");
    std::cout << "ENERGY: " << frg.get_energy_points() << std::endl;
    std::cout << "HITS: " << frg.get_hit_points() << std::endl;
    frg.beRepaired(20);
    std::cout << "ENERGY: " << frg.get_energy_points() << std::endl;
    std::cout << "HITS: " << frg.get_hit_points() << std::endl;
    frg.takeDamage(199);
    std::cout << "ENERGY: " << frg.get_energy_points() << std::endl;
    std::cout << "HITS: " << frg.get_hit_points() << std::endl;
    frg.attack("[[ ENEMY-01 ]]");
    frg.beRepaired(1);
    std::cout << "ENERGY: " << frg.get_energy_points() << std::endl;
    std::cout << "HITS: " << frg.get_hit_points() << std::endl;
    frg.highFivesGuys();
    return 0;
}
