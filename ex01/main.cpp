/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:58:33 by tmoumni           #+#    #+#             */
/*   Updated: 2023/09/27 19:02:00 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap a("Taha");
    std::cout << ">>> NAME 1: " << a << " : " << a.get_energy_points() << std::endl;
    ScavTrap b(a);
    std::cout << ">>> NAME 2: " << b << " : " << b.get_energy_points() << std::endl;
    ScavTrap c("MOUMNI");
    c = b = a;
    std::cout << ">>> NAME 3: " << c << std::endl;
    b.attack("DDDDDDD");
    std::cout << "ENERGY: " << b.get_energy_points() << std::endl;
    std::cout << "HITS: " << b.get_hit_points() << std::endl;
    b.takeDamage(4);
    std::cout << "ENERGY: " << b.get_energy_points() << std::endl;
    std::cout << "HITS: " << b.get_hit_points() << std::endl;
    b.beRepaired(1);
    std::cout << "ENERGY: " << b.get_energy_points() << std::endl;
    std::cout << "HITS: " << b.get_hit_points() << std::endl;
    return 0;
}
