/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:58:33 by tmoumni           #+#    #+#             */
/*   Updated: 2023/10/17 15:59:52 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap a("<<TAHA>>");
    ScavTrap b("zzBIG Ozz");
    ScavTrap c("MOUMNI");
    c.guardGate();
    // c = b = a;
    std::cout << ">>> NAME 1: [ " << a << " ] ENERGYY : " << a.get_energy_points() << std::endl;
    std::cout << ">>> NAME 2: [ " << b << " ] ENERGYY : " << b.get_energy_points() << std::endl;
    std::cout << ">>> NAME 3: [ " << c << " ] ENERGYY : " << a.get_energy_points() << std::endl;
    b.attack("[[ ENEMY ]]");
    std::cout << "ENERGY: " << b.get_energy_points() << std::endl;
    std::cout << "HITS: " << b.get_hit_points() << std::endl;
    b.takeDamage(199);
    std::cout << "ENERGY: " << b.get_energy_points() << std::endl;
    std::cout << "HITS: " << b.get_hit_points() << std::endl;
    b.attack("CCCCCCCCCC");
    b.beRepaired(1);
    std::cout << "ENERGY: " << b.get_energy_points() << std::endl;
    std::cout << "HITS: " << b.get_hit_points() << std::endl;
    return 0;
}
