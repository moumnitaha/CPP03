/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:58:33 by tmoumni           #+#    #+#             */
/*   Updated: 2023/10/17 15:44:15 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap a("CLP-01");
    std::cout << a << " : " << a.get_energy_points() << std::endl;
    a.attack("ENEMY-01");
    ClapTrap b(a);
    b.attack("ENEMY-01");
    std::cout << "ENERGY: " << b.get_energy_points() << std::endl;
    std::cout << "HITS: " << b.get_hit_points() << std::endl;
    b.takeDamage(-4);
    std::cout << "ENERGY: " << b.get_energy_points() << std::endl;
    std::cout << "HITS: " << b.get_hit_points() << std::endl;
    b.beRepaired(-100);
    std::cout << "ENERGY: " << b.get_energy_points() << std::endl;
    std::cout << "HITS: " << b.get_hit_points() << std::endl;
    return 0;
}
