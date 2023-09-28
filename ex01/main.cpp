/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:58:33 by tmoumni           #+#    #+#             */
/*   Updated: 2023/09/28 14:59:51 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap a(">>>TAHA<<<");
    std::cout << ">>> NAME 1: " << a.get_name() << " : " << a.get_energy_points() << std::endl;
    ScavTrap b(a);
    std::cout << ">>> NAME 2: " << b.get_name() << " : " << b.get_energy_points() << std::endl;
    ScavTrap c("MOUMNI");
    c = b = a;
    std::cout << ">>> NAME 3: " << c.get_name() << std::endl;
    b.attack("[[ ENEMY ]]");
    std::cout << "ENERGY: " << b.get_energy_points() << std::endl;
    std::cout << "HITS: " << b.get_hit_points() << std::endl;
    b.takeDamage(100);
    std::cout << "ENERGY: " << b.get_energy_points() << std::endl;
    std::cout << "HITS: " << b.get_hit_points() << std::endl;
    b.attack("CCCCCCCCCC");
    b.beRepaired(1);
    std::cout << "ENERGY: " << b.get_energy_points() << std::endl;
    std::cout << "HITS: " << b.get_hit_points() << std::endl;
    return 0;
}
