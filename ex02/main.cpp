/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:58:33 by tmoumni           #+#    #+#             */
/*   Updated: 2023/09/29 18:09:32 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    FragTrap a("<<TAHA>>");
    FragTrap b("zzBIG Ozz");
    FragTrap c("MOUMNI");
    c.highFivesGuys();
    // c = b = a;
    std::cout << ">>> NAME 1: [ " << a << " ] ENERGYY : " << a.get_energy_points() << std::endl;
    std::cout << ">>> NAME 2: [ " << b << " ] HITS : " << b.get_hit_points() << std::endl;
    std::cout << ">>> NAME 3: [ " << c << " ] ENERGYY : " << a.get_energy_points() << std::endl;
    b.attack("[[ ENEMY ]]");
    std::cout << "ENERGY: " << b.get_energy_points() << std::endl;
    std::cout << "HITS: " << b.get_hit_points() << std::endl;
    b.takeDamage(99);
    std::cout << "ENERGY: " << b.get_energy_points() << std::endl;
    std::cout << "HITS: " << b.get_hit_points() << std::endl;
    b.attack("CCCCCCCCCC");
    b.beRepaired(1);
    std::cout << "ENERGY: " << b.get_energy_points() << std::endl;
    std::cout << "HITS: " << b.get_hit_points() << std::endl;
    return 0;
}
